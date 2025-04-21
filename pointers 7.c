#include <stdio.h>
int main() {
    
    int A[] = {1,2,3,4,5};
    printf("%d \n", A); // 656352
    printf("%d \n", &A[0]); // 656352
    printf("%d \n", A[0]); // 1
    printf("%d \n", *A); // 1

    int *p = A;
    // A++; // invalid
    // P++; // valid

    for(int i = 0; i < 5; i++){
        printf("Address = %d \n", &A[i]);
        printf("Address = %d \n", A+i);
        printf("value = %d \n", A[i]);
        printf("value = %d \n", *A+i);
    }

    
    return 0;
}