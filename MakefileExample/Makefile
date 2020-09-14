output: main.o message.o
	g++ main.o message.o -o hello
	
main.o: main.cpp
	g++ -c main.cpp
	
message.o: message.cpp message.h
	g++ -c message.cpp
	
#APPNAME = jaw
#HEADERS = $(APPNAME).h
#include $(top_srcdir)/makeinclude/make.apprules

clean: 
	@echo "---Clearing---"
	rm *.o hello



