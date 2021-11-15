# Variablen
compiler = /usr/bin/g++
deleter = rm -f

# Bloecke
all: chicken.bin

chicken.bin: chicken.o prog.o
	$(compiler) -o chicken.bin chicken.o prog.o

chicken.o: chicken.hpp chicken.cpp
	$(compiler) -c -o chicken.o chicken.cpp

prog.o: prog.cpp
	$(compiler) -c -o prog.o prog.cpp

clean:
	$(deleter) chicken.bin chicken.o prog.o
