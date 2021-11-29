compiler = /usr/bin/g++
deleter = rm -f;

all: crational.bin

crational.bin: crational.o program.o
	$(compiler) -o crational.bin crational.o program.o

crational.o: crational.hpp crational.cpp
	$(compiler) -c -o crational.o crational.cpp

program.o: program.cpp
	$(compiler) -c -o program.o program.cpp

clean:
	$(deleter) crational.bin crational.o program.o
