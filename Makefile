#Makefile
all: add-nbo

add-nob: add-nbo.o main.o
	g++ -o add-nbo add-nbo.o main.o

main.o: add-nbo.h main.cpp
	g++ -c -o main.o main.cpp

add-nob.o: add-nbo.h add-nbo.cpp
	g++ -c -o add-nbo.o add-nbo.cpp
clean: 
	rm -f add-nbo
	rm -f *.o

