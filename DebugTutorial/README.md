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
gdb run or gcc a.out<br/>
layout next<br/>
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
set args 20<br/>
print args@2<br/>
run
