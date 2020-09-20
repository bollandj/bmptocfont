#include <stdio.h>
#include <stdlib.h>

#include <getopt.h>
#include <errno.h>
#include <string.h>

#define CHAR_WIDTH 6
#define CHAR_HEIGHT 8

#define PRINT_IMAGE

int start_char = -1;
int end_char = -1;

struct
{
	long file_size; // file size in bytes
	long image_size; // reported image size in bytes
	long actual_image_size; // true image size in bytes

	long width; // width in pixels
	long height; // height in pixels
	long row_size; // size of each row of the image in pixels

	long array_offset; // offset from start of file, in bytes, where pixel array begins

	short bits_per_pixel; // bits per pixel i.e. colour depth
	short bytes_per_pixel;

	long comp_method; // compression method (ideally none)
} bmp;

int main(int argc, char *argv[])
{
	/* Parse arguments */

	int opt;
	// opterr = 1;

	while ((opt = getopt(argc, argv, ":s:e:")) != -1) // option flags
	{
		switch (opt)
		{
		case 's':
			start_char = atoi(optarg);
			printf("Option: start_char: %d\n\n", start_char);
			break;

		case 'e':
			end_char = atoi(optarg);
			printf("Option: end_char: %d\n\n", end_char);
			break;

		case ':':
			printf("Option needs a value\n\n");
			break;

		case '?':
			printf("Unknown option: %c\n\n", optopt);
			break;

		default:
			printf("Unknown option: %c\n\n", optopt);
			break;
		}
	}

	if (optind >= argc)
	{
		fprintf(stderr, "No filename given\n\n");
		return EXIT_FAILURE;
	}

	/* Open bitmap */

	FILE *bmp_file;
	char *bmp_filename = argv[optind];

	printf("Attempting to open bitmap \"%s\"\n", bmp_filename);

	if (!(bmp_file = fopen(bmp_filename, "rb")))
	{
		fprintf(stderr, "Error opening bitmap: %s\n", strerror(errno));
		return EXIT_FAILURE;
	}

	char buf[2];

	fread(buf, sizeof(char), 2, bmp_file); // get header field

	if (strncmp(buf, "BM", 2) != 0)
	{
		fprintf(stderr, "Error: invalid bitmap format \n");
		return EXIT_FAILURE;
	}

	printf("Bitmap \"%s\" successfully opened\n\n", bmp_filename);

	/* Read bitmap header */
	fread(&bmp.file_size, sizeof(bmp.file_size), 1, bmp_file); // get file size
	fseek(bmp_file, 4, SEEK_CUR); // skip next 4 bytes (two reserved fields)
	fread(&bmp.array_offset, sizeof(bmp.array_offset), 1, bmp_file); // get array offset
	fseek(bmp_file, 0x12, SEEK_SET); // skip to BITMAPINFOHEADER
	fread(&bmp.width, sizeof(bmp.width), 1, bmp_file); // get bitmap width
	fread(&bmp.height, sizeof(bmp.height), 1, bmp_file); // get bitmap height
	fseek(bmp_file, 2, SEEK_CUR); // skip next 2 bytes (colour plane)
	fread(&bmp.bits_per_pixel, sizeof(bmp.bits_per_pixel), 1, bmp_file); // get bits per pixel
	fread(&bmp.comp_method, sizeof(bmp.comp_method), 1, bmp_file); // get compression method
	fread(&bmp.image_size, sizeof(bmp.image_size), 1, bmp_file); // get image size

	bmp.bytes_per_pixel = bmp.bits_per_pixel/8;
	bmp.row_size = 4 * ((long)(bmp.bits_per_pixel*bmp.width + 31)/32); // round up to nearest multiple of 4
	bmp.actual_image_size = bmp.row_size * bmp.height * bmp.bytes_per_pixel;

	printf("Bitmap header data:\n\n");

	printf("File size:\t %li bytes\n", bmp.file_size);
	printf("R. image size:\t %li bytes\n", bmp.image_size);
	printf("T. image size:\t %li bytes\n\n", bmp.actual_image_size);

	printf("Image width:\t %lipx\n", bmp.width);
	printf("Image height:\t %lipx\n", bmp.height);

	printf("Row size:\t %lipx\n\n", bmp.row_size);

	printf("Bits/pixel:\t %hi\n", bmp.bits_per_pixel);

	printf("Bytes/pixel:\t %hi\n", bmp.bytes_per_pixel);
	printf("Compression:\t %li\n", bmp.comp_method);
	printf("Array offset:\t %li\n\n", bmp.array_offset);

	if (bmp.comp_method != 0)
	{
		fprintf(stderr, "Error: compressed bitmap files are currently not supported\n");
		return EXIT_FAILURE;
	}
	if (bmp.bits_per_pixel % 8 != 0)
	{
		fprintf(stderr, "Error: unsupported bits per pixel\n");
		return EXIT_FAILURE;
	}

	/* Read bitmap image data */

	char *bmp_buf = malloc(bmp.actual_image_size * sizeof(char));
	long bmp_buf_ptr = 0;

	long image_end = bmp.array_offset + bmp.actual_image_size;

	for (long r = image_end - bmp.row_size; r >= bmp.array_offset; r -= bmp.row_size)
	{
		fseek(bmp_file, r, SEEK_SET);

		for (long c = 0; c < bmp.width; c++)
		{
			char pixel; // could be up to 64 bits per pixel
			fread(&pixel, sizeof(char), 1, bmp_file);
			bmp_buf[bmp_buf_ptr++] = pixel ? 0x00 : 0xFF;
		}
	}

	fclose(bmp_file);

	#ifdef PRINT_IMAGE
	for (long r = 0; r < bmp.actual_image_size; r += bmp.row_size)
	{
		for (long c = 0; c < bmp.row_size; c++)
		{
			printf("%s", (bmp_buf[r + c] ? "[]" : ".`"));
		}

		printf("\n");
	}
	printf("\n");
	#endif

	short char_per_row = bmp.width/CHAR_WIDTH;
	short char_per_col = bmp.height/CHAR_HEIGHT;

	if (start_char == -1) start_char = 0;
	if (end_char == -1)   end_char = 255;

	printf("Characters per row:\t %hi\n", char_per_row);
	printf("Characters per column:\t %hi\n\n", char_per_col);

	short bmp_filename_len = strlen(bmp_filename);
	char *header_filename = malloc(bmp_filename_len + 1);
	strcpy(header_filename, bmp_filename);
    strncpy(header_filename + (bmp_filename_len - 3), "h", 2);
	FILE *header_file = fopen(header_filename, "w");

	printf("Writing to: %s\n\n", header_filename);

	fprintf(header_file, "/*  */\n\n");
	fprintf(header_file, "#ifndef FONT_H_\n");
	fprintf(header_file, "#define FONT_H_\n\n");
	fprintf(header_file, "#include <avr/pgmspace.h>\n\n");
	fprintf(header_file, "#define CHAR_WIDTH %d\n", CHAR_WIDTH);
	fprintf(header_file, "#define CHAR_HEIGHT %d\n\n", CHAR_HEIGHT);
	fprintf(header_file, "#define FONT_OFFSET %d\n\n", start_char);
	fprintf(header_file, "const uint8_t font[] PROGMEM =\n");
	fprintf(header_file, "{\n");

	short current_char = start_char;

	for (long r = 0; r < bmp.actual_image_size; r += bmp.row_size*CHAR_HEIGHT)
	{
		for (long c = 0; c < bmp.width; c += CHAR_WIDTH)
		{
			/* beginning of character */
			fprintf(header_file, "\t");
			for (char cc = 0; cc < CHAR_WIDTH-1; cc++)
			{
				/* character column */
				char array_byte = 0x00;
				char i = 0;

				for (long rc = 0; rc < bmp.row_size*CHAR_HEIGHT; rc += bmp.row_size)
				{
					if (bmp_buf[r+c+rc+cc]) array_byte |= 1<<i;
					i++;
				}

				fprintf(header_file, "0x%2.2X, ", array_byte & 0xFF);

			}

			fprintf(header_file, "// %d\n", current_char);
			//printf("\n");

			current_char++;
			if (current_char > end_char) break;
		}

		if (current_char > end_char) break;
	}

	fprintf(header_file, "};\n\n");
	fprintf(header_file, "#endif /* FONT_H_ */");

	fclose(header_file);

	printf("Done\n");

	free(bmp_buf);
	free(header_filename);

	return EXIT_SUCCESS;
}
