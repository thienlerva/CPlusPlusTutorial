all: prime
	
prime:  main.o
	g++ main.cpp -g -o prime

main.o: main.cpp
	g++ -c main.cpp
	
run:
	./prime
	
clean:
	@echo "----Clearing----"
	rm *.o prime