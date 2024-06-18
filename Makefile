all: cryptolib example


example: example.o
	gcc example.o -o cryptolib -O2 -Wall 

example.o: example.c
	gcc -c -O2 -Wall example.c

cryptolib: cryptolib.o
	gcc cryptolib.o -o cryptolib.so -O2 -Wall -fPIC -shared -ldl -D_GNU_SOURCE 

cryptolib.o : cryptolib.c
	gcc -c -O2 -Wall cryptolib.c	

clean:
	rm -f *.o *.so example


