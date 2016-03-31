CC = g++

TARGET = main

CFLAGS = -Wall -c

all:$(TARGET)


$(TARGET): $(TARGET).o  
	$(CC) $(TARGET).o -o $(TARGET)


main.o: $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

clean:
	rm *.o *~ $(TARGET) *~
