#include <stdio.h>

float temp(int c);

int main(){

    int c;
    printf("Enter the value of temprature in celsius :");
    scanf("%d", &c);
    
    float result;
    result = temp(c);
    printf("the value of temparature in Fahrenheit is : %f", result);
    return 0;
}

float temp(int c){
    int result;
    result =(c * 9/5) + 32 ;
    return result;

}
