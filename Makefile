#Makefile
all: add-nob

add-nob: add-nob.o main.o
	g++ -o add-nob add-nob.o main.o

main.o: add-nob.h main.cpp
	g++ -c -o main.o main.cpp

add-nob.o: add-nob.h add-nob.cpp
	g++ -c -o add-nob.o add-nob.cpp
clean: 
	rm -f add-nob
	rm -f *.o

