#include <stdio.h>

void avgsum(int a, int b, int* sum, float* avg){
    *sum = a + b;
    *avg = *sum/2;
}

int main(){
    int a =4, b= 8,sum;
    float avg;
    avgsum(a, b, &sum, &avg);
    printf("The value of sum of a and b is %d\n", sum);
    printf("The value of avg of a and b is %f\n", avg);

    
    return 0;
}