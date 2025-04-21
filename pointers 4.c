#include <stdio.h>
int main() {
    
    int a = 1025;
    int *p;
    p = &a;

    printf("Size of an integer : %d bytes \n", sizeof(int));
    printf("Address = %d, value = %d \n", p , *p);


    void *p1;
    p1 = p;
    printf("%d", p1);

    
    return 0;
}