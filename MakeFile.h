CC=gcc
OBJECTS_MAIN=myBank.o main.o
FLAGS= -Wall -g -fPIC

all: main	
main: $(OBJECTS_MAIN) myBankLib
	$(CC) $(FLAGS) -o main $(OBJECTS_MAIN) ./myBankLib.so -lm
myBankLib: $(OBJECTS_LIB)
	$(CC) -shared -o myBankLib.so $(OBJECTS_MAIN)
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h 
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.so main