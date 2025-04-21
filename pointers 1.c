#include <stdio.h>
void main() {
    

int a;
int *p;
p = &a; // address of a
a = 5;

printf("%d \n", p);
printf("%d \n", &a);
printf("%d \n", *p); // value of a => 5;

printf("a = %d \n", a);
*p = 12;
printf("a = %d \n ", a);

int b = 20;
*p = b; //  here just points only until you ,maually points p = &b;
p = &b;

printf("%d \n", &b);
printf("%d \n", p);
printf("%d \n", *p);
    
}