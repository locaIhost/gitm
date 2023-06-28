TARGET = php7-session-clean
CC = gcc

$(TARGET): main.o find.o putin.o empty.o prem.o
	$(CC) main.o find.o putin.o empty.o prem.o -o $(TARGET)

main.o: main.c
	$(CC) -c main.c

find.o: find.c
	$(CC) -c find.c

empty.o: empty.c 
	$(CC) -c empty.c

putin.o: putin.c 
	$(CC) -c putin.c 

prem.o: prem.c
	$(CC) -c prem.c

clean:
	rm -r *.o $(TARGET)