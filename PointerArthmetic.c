// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
 int a  = 10;
 int *p;
 p = &a;
 
 // pointers arthemetic
 
 // addressof p
 printf("Address of p is %d\n", p); // p is 2002;
 printf("Address of p + 1 is %d\n", p + 1); // p + 1 is 2006 because int 1 => 4 bytes 2002 + 4 => 2006
 printf(" Address of p -1 is %d\n", p - 1); // p - 1is 1998 because 2002 - 4 => 1998
 
 printf("%d\n", p + 2);
 printf("%d\n", *p); // p points to a;
 printf("%d\n", p); // address of p
 printf("%d\n", *p + 1); // now answer is 11 => a = 10 + 1 => 11
 

    return 0;
}
