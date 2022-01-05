#include <stdio.h>

float average(int a, int b, int c);
int main(){

    int a, b, c;
    printf("Enter the value of a, b, c \n");
    scanf("%d %d %d", &a, &b, &c);
    float result;
    result = average(a, b, c);
    printf("The average of three number is :%f", result);
    return 0;
}
float average(int a, int b, int c){
    int result;
    result = (a + b + c)/3;
    return result;
}
