#include <stdio.h>

void swap(int* a, int* b);

int main(){
    int a=3, b=6;
    printf("The value of a and b before swaping is %d and  %d \n",a,b);
    swap(&a,&b);
    printf("The value of a and b after swaping is%d and %d\n ",a,b);

    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
