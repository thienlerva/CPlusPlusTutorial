Debug c++ program on terminal
cd directory 
make (to compile and run)

Debug steps: 
gdb 
file test 
break main
run

https://www.srcmake.com/home/cpp-debug-gdb https://www.tutorialspoint.com/gnu_debugger/gdb_debugging_example1.htm

Refresh the display: refresh (or Control - L) 
Run the prgram: run
See your code: layout next 
Set break point or multiple breakpoints: break main, break factorial, break 11
break *00aaAA11
Clear break point: break main
Go to next line: next (n)
Set into function: step
Continue to next break point: continue
Print a variale value: print variable Print an array: print *arr@len
Watch a variable for changes: watch VARIABLE 
info func // list all functions 
disassemble main || isPrime // show assemble code of a function

cd GNUDebugger
make or gcc -g -lm -std=c99 -w main.c -w != Wall to show errors 
make or g++ -g -lm -w main.cpp 
gdb run(filename) or gdb a.out
layout next || layout src
break isPrimes
run
n
n
p i
p n
n
step
watch x
clear isPrimes
q
!gcc to gcc - q -lm 
set argc 20
print argc@2
run
backtrace full

cd PrimeNumber
either make file or g++ -g -lm -Wall main.cpp or g++ main.cpp -g
either gdb prine or gdb a.out
break 10
break 12
run
layout next || layout src 
Note: sometimes it's stuck at new threat, just close the terminal and restart

