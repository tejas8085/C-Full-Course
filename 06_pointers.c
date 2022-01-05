#include <stdio.h>

int main(){

    int i = 8;
    int* j;
    j = &i;
    printf("The value of i is : %d\n", i);
    printf("The value of address of i is : %u\n", &i);
    printf("The value of address  of i is : %u\n", j);
    printf("The value of address  of j is : %u\n", &j);
    printf("The value of i at address is : %d\n", *j);
    printf("The value of i at address is : %d\n", *(&i));
    return 0;
}