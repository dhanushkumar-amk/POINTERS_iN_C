#include <stdio.h>

int  compare(int a, int b){
    if(a > b)
        return -1;
    return 1;
}

void sort(int *arr, int n, int (*compare)(int, int)){ 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(compare(arr[j], arr[j+1]) > 0){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main() {
    
     
    int arr[] = {3,2,1,6,5,4};
    int size = sizeof(arr)/ sizeof(int); 
     for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);   

    printf("\n") ;
    
    sort(arr, size, compare);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);    
    return 0;
}