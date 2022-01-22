

/* 
 * File:   main.c
 * Author: codex
 *
 * Created on November 4, 2021, 8:15 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
 * 
 */

// static variable
int runner() {
    static int count = 0;
    count++;
    return count;
}

// struct
typedef struct {
        int x;
        int y;
    } point;

typedef struct {
    char *brand;
    int model;
} vehicle;

typedef struct {
    char *name;
    int age;
} person;

void addOne(int *n);

void guessNumber();

void move(point *p);
void increment(int *p);
int add(int *A, int size);
int *sumPtr(int *a, int *b);
int factorial(int num);

int strLength(char *str);
void revstr(char *str);

int main(int argc, char** argv) {

//    printf("Hello, world!\n");
//    
//    char *name = "John";
//    int age = 27;
//    
//    printf("%s is %d years old.\n", name, age);
//    printf("Length of John: %zd\n", strlen(name));
//    
//    if (strncmp(name, "John", 4) == 0) {
//        printf("Hello, John!\n");
//    } else {
//      printf("Go away.\n");
//    }
    
    char dest[] = "Hello";
    char src[] = "World";
    
    //strncat(dest, src, 6);
    printf("%s\n", dest);
    
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }
    
    printf("Sum of the array is %d\n", sum);
    
    int n = 0;
    while (n < 10) {
        printf("%d, ", n++);
    }
    printf("\n");
    
    
    printf("%d \n", runner());
    printf("%d \n", runner());
    
    point p;
    p.x = 5;
    p.y = 10;
    printf("x is %d, y is %d\n", p.x, p.y);
    
    vehicle myCar;
    myCar.brand = "Ford";
    myCar.model = 2007;
    
    printf("Before add one: %d\n", n);
    addOne(&n);
    printf("After add one: %d\n", n);
    
    move(&p);
    printf("Move pointer by one: %d, %d.\n", p.x, p.y);
    
    //guessNumber();
    
    
    //Dynamic allocation
    person *myPerson = (person *) malloc(sizeof(person));
    
    myPerson->name = "John";
    myPerson->age = 27;
    
    printf("Dynamic allocation, %s, %d.\n", myPerson->name, myPerson->age);
    free(myPerson);
    
    printf("\n");
    
    int numOfFish = 4;
    int *numOfFishPtr = &numOfFish;
    
    /**
     * Address of pointer: numOfFishPtr or &numOfFish
     * Value of numOfFish: *numOfFishPtr or numOfFish
     * Since array is a pointer, treat like pointer: &A, *A
     * when passing array into a function, add(A, size); // A or &A
     * Address of array: &A, &A[i] = (A + i)
     * Value of array at i: A[i] = *(A + i)
     * 
     */
    int A[5] = {1, 2, 3, 4, 5};
    int *pA = A; // *pA = &A because array is always a pointer, can ignore &A
    //pA++;  // valid, A++ is not valid
    
    printf("Array A[5]: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(A + i));
    }
    printf("\n");
    
    printf("Address of pointer pA: %p, value: %d\n", pA, *pA);
    printf("Address of next pointer pA: %p, value: %d\n", pA+1, *(pA+1));
    printf("Address of first array index &A: %p, value: %d\n", &A, *A); // &A[0]
    printf("Address of second array index &A[1]: %p, value: %d\n", &A[1], *(A + 1));
    printf("Address of first array index - A: %p, value: %d\n", A, *A);  // &A = A, *A = A[0]
    printf("Address of second array index - (A + 1): %p, value: %d\n", A + 1, A[1]);
    printf("Address of third array index - (A + 2): %p, value: %d\n", A + 2, *(A + 2));
    
    printf("\n");
    
    // Pointer Arithmetics ++, --
    int intA[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        printf("intA[%d] has value %d, and address @ %x\n", i, intA[i], &intA[i]);
    }
    
    int *intAPtr = &intA[3]; //point to the 4th element in the array
    printf("Address: %x, has value %d\n", intAPtr, *intAPtr);
    
    intAPtr++; //now increase the pointer's address so it points to the 5th elemnt in the array
    printf("Address: %x - has value %d\n", intAPtr, *intAPtr);
    
    int *intpointer = &intA[1]; //point to the 2nd element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer); //print the address of the 2nd element

    intpointer += 2; //now shift by two the point's address so it points to the 4th element in the array
    printf("address: %x - has value %d\n", intpointer, *intpointer);
    
    int pp = 5;
    increment(&pp);
    printf("After increment p: %d\n", pp);
    
    int size = sizeof(A) / sizeof(A[0]);
    int total = add(A, size); // A or &A
    printf("Sum of array: %d\n", total);
    
    int a = 5;
    int b = 10;
    int *addTotal = sumPtr(&a, &b);
    printf("%d\n", *addTotal);
    
    int numFact = 5;
    int fact = factorial(numFact);
    printf("Factorial of numFact is: %d\n", fact);
    
    char str[40];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strLength(str);
    printf("Length of string: %d\n", length);
    printf("Length of string: %zd\n", (strlen(str)));
    
    revstr(str);
    printf("The reversed string: %s\n", str);
    
    return 0;
}


int foo(int bar) {
    return bar * 10;
}

void addOne(int *n) {
    (*n)++;  // *n += 1;
}

void guessNumber() {
    
    // Use current time as seed for random generator
    srand(time(0));
    
    int lower = 1, upper = 6;
    int randomNumber = (rand() % (upper - lower + 1)) + lower;
    printf("%d\n", randomNumber);
    int guessNumber;
    printf("Guess number from 1 - 6: ");
    scanf("%d", &guessNumber);
    
    if (guessNumber < 1) {
        return;
    }
    
    if (guessNumber == randomNumber) {
        printf("You are correct!\n");
    } else {
        printf("You were wrong, the correct number is: %d\n", randomNumber);
    }
}

void move(point *p) {
    p->x++; // (*p).x++;
    p->y++; // (*p).y++;
}

void increment(int *p) {
    (*p)++; // *p = *p + 1; or *p += 1;
}

int add(int *A, int size) { // *A = A[]
    int total = 0;
    
    for (int i = 0; i < size; i++) {
        total += *(A + i); // sum += A[i]
    }
    return total;
}

int *sumPtr(int *a, int *b) {  // return pointer to integer
    
    int *c = (int*) malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int factorial(int num) {
   
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int strLength(char *str) {
    int i = 0;
    while (*str != '\0') {
        str++;
        i++;
    }
    return i;
}
void revstr(char *str) {
    int len, i;
    char *start, *end, temp;
    
    len = strlen(str);
    start = str;
    end = str;
    
    for (i = 0; i < len - 1; i++) {
        end++;
        //printf("%c", *end);
    }
    printf("%s\n", start);
    printf("%c\n", *start);
    printf("%c\n", *end);
    
    for (i = 0; i < len / 2; i++) {
        temp = *end;
        *end = *start;
        *start = temp;
        
        start++;
        end--;
    }
}
