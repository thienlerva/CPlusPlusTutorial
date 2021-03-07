#include <stdio.h>

int main()
{

	int a = 1025;
	int *aPrt = &a;

	//aPrt = &a;  // &a = address of a
	// printf("%d\n", aPrt); // address of aPrt
	// printf("%d\n", *aPrt);  // *aPrt - value at address of aPrt
	// printf("%d\n", &a);

	printf("size of interger is %d bytes\n", sizeof(int));
	printf("Address = %d, value = %d\n", aPrt, *(aPrt));
	printf("Next Address = %d, next value = %d\n", aPrt + 1, *(aPrt + 1));

	char *pC = (char*) aPrt;  // typecasting
	printf("size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, value = %d\n", pC, *pC);
	// 1025 = 000000 000000 000100 000001
	printf("Next Address = %d, next value = %d\n", pC+1, *(pC+1));

	// void pointer - generic pointer
	void *p0;
	//p0 = (void*) aPrt;  // typecasting
	p0 = aPrt;  //shortcut for void typecasting
	printf("Address = %d\n", p0);
}
