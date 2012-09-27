CC=gcc
objects =  bclock.o
all : $(objects)
	$(CC) -o bclock $(objects)
bclock.o: bclock.h 
clean : 
	rm bclock $(objects)
