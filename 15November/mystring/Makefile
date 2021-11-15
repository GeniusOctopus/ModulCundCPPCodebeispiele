compiler = /usr/bin/g++
cleaner = rm -r

all: mystring.bin

mystring.bin: mystring.o prog.o
	$(compiler) -o mystring.bin mystring.o prog.o

mystring.o: mystring.cpp mystring.hpp
	$(compiler) -c -o mystring.o mystring.cpp

prog.o: prog.cpp
	$(compiler) -c -o prog.o prog.cpp

clean:
	$(cleaner) prog.o mystring.o mystring.bin
