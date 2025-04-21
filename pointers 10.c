#include <stdio.h>

// void func(int *c  or int c[]) // one d array
// void func(int (*c)[3] or int c[][3] ) // two d array
// void func (int c[][2][2] or int(*c)[2][2]) // three d array

int main() {
    
    int c[3][2][2] = {
        {{2,5}, {7,9}},
        {{3,4}, {6,1}},
        {{0,8}, {11,13}}
    };

    printf("%d %d %d %d \n", c, *c, c[0], &c[0][0]);
    printf("%d \n", *(c[0][0] + 1)); // 5    
    return 0;
 

//  func(c);

}