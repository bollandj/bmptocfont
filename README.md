# bmptocfont

A simple command line utility to convert font bitmaps into a C data array

This utility was originally made as a means of producing font header files for use with OLED and LCD displays in embedded AVR projects

A few font bitmaps from the Uzebox project (http://uzebox.org/wiki/Font_Bitmaps) are provided for testing the program with

# Current limitations:

It is assumed that:

- characters are 6 pixels (width) by 8 pixels (height) in size
- the input file is an 8 bit per pixel, uncompressed bitmap file
- character pixels are pure black; any other colour pixel is treated as empty

It is also assumed that a 1 pixel horizontal gap appears between each character; hence the output array will be (character width - 1) * (number of characters) bytes in size

# Usage:

	bmp2c <filename> (<flags>)

# Optional flags:

	-s <start character> 	The ASCII value of the first character to appear in the image (default: 0)
	-e <end character> 		The ASCII value of the last character that should be read from the bitmap (default: 255)
