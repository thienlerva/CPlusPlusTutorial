#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum (int *arr, int n);
int isPrime(int x);
int* getPrimes(int n);

int main(int argc, char** argv) {

//    int num[] = {5, 10, 15};
//    int total = sum(num, 3);
//    
//    printf("The sum of the array is: %d\n", total);
  
    int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  int flag = isPrime(n);
  
  if (flag == 1) {
      printf("%d is a prime number", n);
  } else {
      printf("%d is a not a prime number", n);
  }
  
//    int n = 10;
//    if (argc == 2) {
//       n = atoi(argv[1]);
//    }
//    
//    int *primes = getPrimes(n);
//    
//    int s = sum(primes, n);
//    printf("The sum of the first %d prime is %d\n", n, s);
    
    return (0);
}

int sum (int *arr, int n) {
    int total=0;
    
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    
    return total;
}

int* getPrimes(int n) {
    int *result = (int *) malloc(sizeof(int) * n);
    result[0] = 2;
    int i = 1;
    int x = 3;
    
    while (i < n) {
        if (isPrime(x)) {
            result[i] = x;
            i++;
        }
        x += 2;
    }
    return result;
}

int isPrime(int x) {
    
    if ( x < 2) {
        return 0;
    } else if(x == 2) {
        return 1;
    } else if (x % 2 == 0) {
        return 0;
    }
    for (int i = 3; i <= sqrt(x); i+=2) {
        if (x % 1 == 0) {
            return 0;
        }
    }
    return 1;
}

