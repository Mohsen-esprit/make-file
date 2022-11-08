prog : bureau.o main.o
	gcc bureau.o main.o -o prog -g

main.o: main.c
	gcc -c main.c -g

bureau.o : bureau.c
	gcc -c bureau.c -g


