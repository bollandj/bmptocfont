MAIN = main
PROGRAM = bmp2c

CC = gcc
CFLAGS = -Wall

# make program executable
all: $(PROGRAM) 

$(PROGRAM): $(MAIN).o
	$(CC) $(CFLAGS) -o $(PROGRAM) $(MAIN).o

clean:
	rm -f *.o $(PROGRAM)