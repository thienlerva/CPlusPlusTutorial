Debug c++ program on terminal<br />
cd directory <br />
make (to compile and run)

Debug steps: <br />
gdb <br />
file test <br/>
break main<br/>
run

https://www.srcmake.com/home/cpp-debug-gdb
https://www.tutorialspoint.com/gnu_debugger/gdb_debugging_example1.htm

Refresh the display: refresh (or Control - L) <br/>
Run the prgram: run<br/>
See your code: layout next <br/>
Set break point: break main, break factorial, break 11<br/>
Clear break point: break main<br/>
Go to next line: next (n)<br/>
Set into function: step<br/>
Continue to next break point: continue<br/>
Print a variale value: print variable
Print an array: print *arr@len<br/>
Watch a variable for changes: watch VARIABLE


cd GNUDebugger<br/>
make or gcc -g -lm -std=c99 -w main.c   -w != Wall to show errors <br/>
make or g++ -g -lm -w main.cpp <br/>
gdb run or gcc a.out<br/>
layout next || layout src<br/>
break isPrimes<br />
run<br/>
n<br/>
n<br/>
p i<br/>
p n<br/>
n<br/>
step<br/>
watch x<br/>
clear isPrimes<br/>
q<br/>
!gcc to gcc - q -lm <br/>
set argc 20<br/>
print argc@2<br/>
run<br/>
backtrace full<br/>

cd PrimeNumber<br/>
either make file or g++ -g -lm -Wall main.cpp or g++ main.cpp -g<br/>
either gdb prine or gdb a.out<br/>
break 10<br/>
run<br/>
layout next || layout src <br/>
Note: sometimes it's stuck at new threat, just close the terminal and restart<br/>

