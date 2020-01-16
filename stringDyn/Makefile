CC=gcc
FLAG=-W -Wall -pedantic

test: stringDyn.o test.c
	$(CC) $(FLAG) stringDyn.o test.c -o test

stringDyn.o: stringDyn.h stringDyn.c
	$(CC) $(FLAG) -c stringDyn.c -o stringDyn.o

clean:
	rm -rf *.o