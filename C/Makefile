
CC = gcc
CFLAGS = -Wall -g

OBJ = main.o transforms.o

TARGET = program

all: $(TARGET)
main.o: main.c figure.h
	$(CC) $(CFLAGS) -c main.c -o main.o

transforms.o: transform_functions.c figure.h
	$(CC) $(CFLAGS) -c transform_functions.c -o transforms.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
