#include <stdio.h>

int main(){
    int celsius;
    printf("Enter the temperature in celsius \n",celsius);
    scanf("%d",&celsius);

    printf("Temprature in Fahrenheit is %d",(celsius * 9/5) + 32);
    return 0;

    // (0°C × 9/5) + 32 = 32°F

}