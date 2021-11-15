# Variablen
compiler = /usr/bin/g++
deleter = rm -f

# Bloecke
all: animal.bin

animal.bin: animal.o prog.o
	$(compiler) -o animal.bin animal.o prog.o

animal.o: animal.hpp animal.cpp
	$(compiler) -c -o animal.o animal.cpp

prog.o: prog.cpp
	$(compiler) -c -o prog.o prog.cpp

clean:
	$(deleter) animal.bin animal.o prog.o
