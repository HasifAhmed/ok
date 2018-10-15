all: list.o tunes.o testing.o
	gcc list.o tunes.o testing.o
run:
	./a.out

clean:
	rm *.o

list.o: list.c list.h
	gcc -c list.c

tunes.o: tunes.h tunes.c
	gcc -c tunes.c

driver.o: driver.c
	gcc -c driver.o
