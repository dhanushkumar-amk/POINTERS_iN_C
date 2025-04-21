#include <stdio.h>
#include <stdlib.h>

void printHello(){
    printf("Hello world \n");
}

int *add(int *a, int *b){
    // printf("Address of a in Add function = %d \n ", &a); // 6487536
    // printf("Address of a in Add (Address of a main) function = %d \n ", a);
    // printf("value at Address stored in an  Add function = %d \n ", *a);
    // int c = a + b; 
    int *c = (int *) malloc(sizeof(int));
    *c = *a + *b; 
    return c;
}

int main() {
    int a = 10;
    int b = 30;
    // int c = add(a, b);
        int* ptr = add(&a, &b);
    // printf("Address of a in main function = %d \n ", &a); // 6487572
    printHello();
    printf("sum = %d \n", *ptr);
    return 0;
}