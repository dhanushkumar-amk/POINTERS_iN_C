#include <stdio.h>

void increment(int *a){
    *a += 1;
    // printf("Address of variable a in increment functin is : %d \n", &a);
}

int main() {
   int a = 10;
    increment(&a);
    // printf("Address of variable a in main functin is : %d \n", &a);
    printf("%d", a);
    return 0;
}