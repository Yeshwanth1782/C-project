ABC.exe:main.o fact.o big3.o palidrom.o
	gcc -o ABC.exe main.o fact.o big3.o palindrom.o

main.o:main.c
	gcc -c main.c

fact.o:fact.c
	gcc -c fact.c

big3.o:big3.c
	gcc -c big3.c

palidrom.o:palindrom.c
	gcc -c palindrom.c
