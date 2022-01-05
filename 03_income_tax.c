#include <stdio.h>

int main(){
    float amount, tax;
    printf("enter the your net amount :\n");
    scanf("%f", &amount);
    if (amount <= 250000)
    {
        tax = 0.0 * (amount - 250000);
        printf("your net tax is %f", tax);
    }
     if (amount> 250000 && amount <= 500000)
    {
        tax = 0.05 * (amount - 250000);
        printf("your net tax is %f", tax);
    }
     if (amount > 500000 && amount<= 1000000)
    {
        tax = 0.20 * (amount - 250000);
        printf("your net tax is %f", tax);
    }
     if (amount > 1000000)
    {
        tax = 0.30 * (amount - 250000 );
        printf("your net tax is %f", tax);
    }
    return 0;
}