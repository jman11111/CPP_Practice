CFLAGS = -O
CC = g++

wordcount: hello.o
 $(CC) $(CFLAGS) -o wordcount hello.o hashtable.o

hello.o: hello.cpp
 $(CC) $(CFLAGS) -c hello.cpp

hashtable.o: hashtable.cpp
 $(CC) $(CFLAGS) -c hashtable.cpp

clean:
 rm -f core *.o 