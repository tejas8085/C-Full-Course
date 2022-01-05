#include <stdio.h>

void add(int a){
    printf("The address of variable a is %u\n", &a);
}

int main(){

    int i=4;
    printf("The value of i is %d\n", i);
    add(i);
    printf("The value of address i is %u\n", &i);

    return 0;
}