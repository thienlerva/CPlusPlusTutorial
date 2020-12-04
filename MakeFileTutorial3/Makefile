# the variable CC will be the compiler to use
# CC=g++
#I want to say that CFLAGS will be the options
# CFLAGS=-c -Wall
# all: hello

# hello: main.o factorial.o hello.o
# 	$(CC) main.o factorial.o hello.o -o hello

# main.o: main.cpp
# 	$(CC) $(CFLAGS) main.cpp

# factorial.o: factorial.cpp
# 	$(CC) $(CFLAGS) factorial.cpp

# hello.o: hello.cpp
# 	$(CC) $(CFLAGS) hello.cpp

# compile:
# 	g++ main.cpp factorial.cpp hello.cpp -c

# run:
# 	./hello

# clean:
# 	@echo "----Clearing----"
# 	rm *.o hello


CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp hello.cpp factorial.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(SOURCES) -g -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run:
	./hello

clean:
	@echo "----Clearing----"
	rm *.o hello

#reference http://mrbook.org/blog/tutorials/make/
# make hello
# make run
# make clean
