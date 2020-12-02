all: prime

prime: main.o
	g++ main.o -g -o prime

main.o: main.cpp
	g++ -c main.cpp
	
compile:
	g++ main.cpp -g -o prime
	
run:
	./prime

clean: 
	rm *o prime