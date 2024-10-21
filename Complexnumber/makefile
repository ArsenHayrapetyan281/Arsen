Project:Complex.o Sorting.o main.o
	g++ Complex.o Sorting.o main.o -o Project
Complex.o:Complex.h Complex.cpp 
	g++ -c  Complex.cpp -o Complex.o
Sorting.o:Sort.h sorting.cpp
	g++ -c  sorting.cpp -o Sorting.o
main.o:main.cpp
	g++ -c main.cpp -o main.o
clear:
	rm -r *.o 


