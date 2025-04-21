#include <stdio.h>
int main() {
   
   int a = 1025;
   int *p = &a;

   printf("Size if an Integer is %d \n", sizeof(int));
   printf("Address = %d, Value = %d \n", p, *p);
   printf("Address = %d, Value = %d \n", p+1, *(p+1));

   char *p0;
   p0 = (char*)p; // type cast for character pointer because p is an integer pointer;
    printf("Size if an Character is %d \n", sizeof(char));
   printf("Address = %d, Value = %d \n", p0, *p0); // value is 1 because
   // 1025 in binary form 00000000 00000000 00000100 00000001; char has take one byte 1 * 2^0;
    printf("Address = %d, Value = %d \n", p0+1, *(p0+1)); 

    return 0;
}