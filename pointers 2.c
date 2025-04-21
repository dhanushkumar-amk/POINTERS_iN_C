#include <stdio.h>
int main() {
    
    int a = 10;
    int *p = &a;

    printf("Address of p : %d \n", p);
    printf("Value of an address of p : %d \n", *p);
    printf("Size of the integer is : %d bytes \n", sizeof(int));
    printf("Address of p+1 : %d \n", p + 1);
    printf("Value of an address of p+1 : %d \n", *(p+1));
    printf("Value of an address of p+1 : %d \n", *p+1);

    return 0;
}