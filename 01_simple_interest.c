#include<stdio.h>

int main(){
    int principal=100, rate=4, years=4;
    
    int simpleInterest = (principal * rate * years)/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}