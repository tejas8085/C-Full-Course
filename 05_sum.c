#include <stdio.h>
int sum(int a, int b);

int main(){
    int c;
    c = sum(4,5);
    printf("the value of a + b is : %d \n", c);
    
    return 0;
}


int sum(int a, int b){
    int c;
    c = a +b;
    return c;
}
