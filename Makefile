CFLAGS = -O
CC = g++

wordcount: main.o hashtable.o
	$(CC) $(CFLAGS) -o wordcount main.o hashtable.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

hashtable.o: hashtable.cpp
	$(CC) $(CFLAGS) -c hashtable.cpp

clean:
	rm -f core *.o 