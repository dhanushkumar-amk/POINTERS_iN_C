#include <stdio.h>
int main() {
    
    int x = 5;
    int *p = &x;
    *p = 6; // x = 5 => 6;
    int **q = &p;// store the address of a p;
    int ***r = &q;

    printf("%d \n",&x);
    printf("%d \n", *p); // 6
    printf("%d \n", *q);
    printf("%d \n", *(*q)); // 6
    printf("%d \n", *(*r));  
    printf("%d \n", ***r);  // 6

    ***r = 10; // it points to x now so we change the value with x = 10;
    printf("x = %d \n", x);

    **q = 12;
    printf("x = %d \n", x);

    *p= 14;
    printf("x = %d \n", x);
    
    return 0;
}