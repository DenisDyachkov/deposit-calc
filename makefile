CFLAG=-Wall 

main: main.o
	gcc $(CFLAG) -o main main.o

main.o: main.c
	gcc -c main.c

clean: 
	rm main *.o
