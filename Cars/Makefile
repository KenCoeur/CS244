all: clean prog

object:
	g++ -o  implementation.o -c implementation.cpp

prog: object
	g++ -o executable implementation.o main.cpp

clean:
	rm -f executable implementation.o
