#include <stdio.h>

int sumOfElements(int *arr, int size){ //int *arr or int arr[] same
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/ sizeof(int); 
    int total = sumOfElements(arr, size); // arr or &arr[0] are same
    printf("Sum of elements : %d \n",total);
    return 0;
}