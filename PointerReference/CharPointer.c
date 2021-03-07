#include <stdio.h>
#include <string.h>

void print(const char *C) {  // const only read, not write
    int i = 0;
    // while(*(C + i) != '\0') {  //C[i]
    //     printf("%c", *(C+i)); C[i]
    //     i++;
    // }

    while (*C != '\0') {
        printf("%c", *C);
        C++;  // increment address
    }
    printf("\n");
}
int main()
{
    //char C[] = "JOHN"; // null terminating character inclusive
    //char C[4] = {'J', 'O', 'H', 'N'};  // not correct
    // char C[5] = {'J', 'O', 'H', 'N', '\0'};
    // int len = strlen(C);
    // printf("Size in bytes = %d\n", sizeof(C));
    // printf("Length = %d\n", len);
    // printf("%s\n", C);

    char C[] = "Hello";
    char *cPrt;
    cPrt = C;
    //printf("%c\n", cPrt[1]);  // l
    cPrt[0] = 'A',  // "Aello"
    //printf("%s\n", C);
    //cPrt[i] = * (cPrt + 1)
    // C[i] or * (C + 1)
    //C = cPrt // invalid
    //C++ // invalid
    cPrt++; // valid

    char C2[] = "Hello";
    print(C2);

    char *C3 = "Hello world";  // string stored as constant, cant change
    print(C3);
}