#include <stdio.h>

int main(){

    int a =5;
    int*b;
    b = &a;

    printf("The value of address of a is %u\n", &a);
    printf("The value of address of a is %u\n", b);
    printf("The value of variable a at address  is %d\n", *b);
    return 0;
}