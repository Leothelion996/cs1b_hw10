CC = g++

all: hw10

hw10: guessboth.o guessFace.o guessSuit.o 
	$(CC) hw10.cpp -o hw10 guessboth.o guessFace.o guessSuit.o

guessboth.o: guessboth.cpp hw10.h
	$(CC) -c guessboth.cpp -o guessboth.o

guessface.o: guessFace.cpp hw10.h
	$(CC) -c guessFace.cpp -o guessFace.o

guessSuit.o: guessSuit.cpp hw10.h
	$(CC) -c guessSuit.cpp -o guessSuit.o
clean:
	rm hw10 *.o

tar:
	tar cf hw10.tar *.cpp *.h *.scr makefile