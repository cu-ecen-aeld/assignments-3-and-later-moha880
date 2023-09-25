# Makefile for writer.c

# Compiler
ifdef CROSS_COMPILE
CC = $(CROSS_COMPILE)gcc
else
CC = gcc
endif


# Compiler flags
CFLAGS = -Wall -Wextra

# Source file
SRC = writer.c

# Output executable
OUTPUT = writer

all: $(OUTPUT)

$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC)

clean:
	rm -f $(OUTPUT)

