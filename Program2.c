// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int a;
   int *p; // int* p it aslo work;
   a = 10;
   p = &a; // &a is a adresss of a
   *p = 12;  // dereferencing
   
   int b = 20;
   *p = b;  // here we only points address of b to value of a; // the value only change but address can't be change
   
   // p = &b; => it only changes the pointers
   
   printf("%d\n", p);
   printf("%d\n", *p); // *p value at address of a
   printf("%d\n", &a);
   
   printf("%d\n", &b);

    return 0;
}
