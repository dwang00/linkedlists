all: main.o functions.o
	gcc -o linkedlists main.o functions.o

main.o: main.c header.h
	gcc -c main.c header.h

functions.o: functions.c
	gcc -c functions.c

run:
	./linkedlists

clean:
	del *.exe
	del *.o
	del *.gch
