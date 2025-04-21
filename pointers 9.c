#include <stdio.h>
#include <string.h>

void customPrint(char *c){
    while(*c != '\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main() {
 
    char c[20] = "hello";
    customPrint(c);
    return 0;
}

   // char c[] = "John";
    // c[0] = 'j';
    // c[1] = 'o';
    // c[2] = 'h';
    // c[3] = 'n';
    // c[4] = '\0';
    // printf(" length = %d \n" , strlen(c));
    // printf("%s \n", c);
 