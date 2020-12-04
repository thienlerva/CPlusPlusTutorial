CC=g++
CFLAGS=-c -w
LDFLAGS=
SOURCES=main.cpp Person.cpp Instructor.cpp Student.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=database

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(SOURCES) -g -o $@
	
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
	

#all: database
#	
#database:  main.o Person.o Instructor.o Student.o
#	$(CC) main.cpp Person.cpp Instructor.cpp Student.cpp -g -o database

#main.o: main.cpp  these are optional
#	$(CC) $(CFLAGS) main.cpp
#	
#Person.o: Person.cpp
#	$(CC) $(CFLAGS) Person.cpp
#	
#Instructor.o: Instructor.cpp
#	$(CC) $(CFLAGS) Instructor.cpp
#	
#Student.o: Student.cpp
#	$(CC) $(CFLAGS) Student.cpp thiese are optional
	
run:
	./database
	
clean:
	@echo "----Clearing----"
	rm *.o database
