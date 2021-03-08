// Function pointers and callbacks
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printHello(char *name) {
    printf("Hello %s\n", name);
}

int Add(int a, int b) {
    return a+b;
}

//int (*Func)(int, int);  // declaring a function pointer

void A() {
    printf("Hello from A\n");
}

void B(void (*ptr)()) { // function pointer as argument
    ptr(); // call-back function that "ptr" points to
}

int compare(int a, int b) {
    if (a > b) return 1;
    return -1;
}

int absoluteCompare(int a, int b) {
    if (abs(a) > abs(b)) return 1;
    return -1;

}

// callback function should compare two integers, should return
// 1 if first element has high rank, 0 if equal, and -1 if second
// element has higher rank.
void bubbleSort(int *A, int n, int (*compare)(int, int)) {
    int i,j,temp;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (compare(A[j], A[j + 1]) > 0) {  
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int compareQSort(const void* a, const void* b) {
    int A = *((int*)a);  // typecasting to int* and getting value
    int B = *((int*)b);
    // return abs(A) - abs(B);
    return A-B;
}

float square(int num) {
    return num*num;
}

float cube(int num) {
    return num*num*num;
}

float squareRoot(int num) {
    return sqrt(num);
}

// float calc(int num, float (*op)(int)) {
//     return op(num);
// }

typedef float (*op_t)(int);

float calc(int num, op_t op) {
    return op(num);
}

int main() {

    int c;
    // pointer to function that should take
    // (int, int) as argument and return int
    int (*p)(int, int);
    p = Add; // same p = &Add
    c = p(2,3);  // same c = (*p)(2,3) dereference and executing the function
    // printf("Address of function Add: %d\n", &Add);
    // printf("Address of pointer: %d\n", p);
    // printf("%d\n", c);

    void (*ptr)(char*);
    ptr = printHello;
    //ptr("Tom");

    // void (*funcPtr)() = A;
    // B(funcPtr);
    B(A);  // same as above, A is a callback function

    int i, A[] = {-31,22,11,-50,-6,4};
    bubbleSort(A, 6, absoluteCompare);
    
    for (i = 0; i < 6; i++) {
        printf("%d ", *(A + i));  // same A[i]
    }
    printf("\n");

    qsort(A, 6, sizeof(int), compareQSort);
    for (i = 0; i < 6; i++) {
         printf("%d ", *(A + i));
    }
    printf("\n");

    printf("square:\t%.2f\n", calc(5, square));
    printf("cube:\t%.2f\n", calc(5, cube));
    printf("square root:\t%.2f\n", calc(5, squareRoot));
}