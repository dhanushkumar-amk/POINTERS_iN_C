#include <stdio.h>
#include <stdlib.h>

int main() {
   

    int n;
    printf("Enter the size of an array \n ");
    scanf("%d", &n);
    int *a = (int*) malloc(n * sizeof(int)); // default garbage value
    // int *a = (int*) calloc(n, sizeof(int)); // default 0 for all

    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }

    // free(a); 
    
    int *b = (int *) realloc(a, 2*n*sizeof(int));
    printf("Previous bloac address = %d, new block address = %d \n", a, b); // same address

    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}