#include <stdio.h>

int main(){
    
    int a = 1025;
    int *p;
    p = &a;
    
    printf("Address of a = %d\n", &a);
    printf(" size of an integer is %d bytes \n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    
    
    /*
    Address of a = 1264480484
    size of an integer is 4
    Address = 1264480484, value = 1025
    */
    
    char *p0;
    p0 = (char*) p; // i gives error because p points to integer but p0 points to the char so we can type cast
    
      printf(" size of an character is %d bytes\n", sizeof(char));
      printf("Address = %d, value = %d", p0, *p0);
    
    /*
    size of an character is 1 bytes
    Address = -608826788, value = 1 // iss one because char consits of one byte  binary reprsenation of 1025 is 00000100 00000001  then it takes one byte so value is 1 

    */
    
    // return 0;
}
