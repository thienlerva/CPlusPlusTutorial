#include <stdio.h>
#include <stdlib.h>

void increment(int *p) {
    *p = *p + 1;
}

int sum(int *A, int size) { // int A[]
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(A + i); // sum += A[i];
    }
    return sum;
}

void printHello() {
    printf("Hello world\n");
}

int *add(int *a, int *b) {  //returns pointer to integer
    // int c = *a + *b;
    // return &c;
    int *c = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}


int main() {
    //int a = 10;
    // increment(&a);
    // printf("a = %d\n", a);

    // Element at index i:
    // Address: &A[i] or (A + i)
    // Value: A[i] or * (A + i)
    // A instead of &A[0] give s base address of array A
    int A[5] = {1,2,3,4,5};
    int *pA = A;  // same *pA = &A because A is array, array is always pointer
    //pA++;  // valid
    // A++; // invalid
    // printf ("Address after increment pA = %d\n", (pA + 1));
    // printf ("Value after increment pA = %d\n", *(pA + 1));
    // printf("Address of pointer pA: %d, value: %d\n", pA, *pA);
    // printf("Address of next pointer pA: %d, value: %d\n", pA+1, *(pA+1));
    // printf("Address of first index: %d, value: %d\n", &A, *A); // &A[0]
    // printf("Address of first index: %d, value: %d\n", A, *A);  // &A, A[0]
    // printf("Address of next index: %d, value: %d\n", A + 1, *(A + 1));

    // printf("%d\n", A);
    // printf("%d\n", &A[0]);
    // printf("%d\n", A[0]);
    // printf("%d\n", *A);
    // printf("%d\n", A + 1);
    // printf("%d\n", *(A + 1));

    // for( int i = 0; i < 5; i++) {
    //     printf("Address = %d\n", &A[i]);
    //     printf("Address = %d\n", A + i);
    //     printf("value = %d\n", A[i]);
    //     printf("value = %d\n", *(A + i));
    // }

    // int size = sizeof(A)/sizeof(A[0]);
    // int total = sum(A, size); // (&A, size);
    // printf("Sum of elements = %d\n", total);

    int a = 2, b = 4;
    int *prt = add(&a, &b);
    printHello();
    printf("Sum = %d\n", *prt);
}