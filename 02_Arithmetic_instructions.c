#include <stdio.h>
#include <math.h>

int main(){
    int a = 6;
    int b = 5;
    printf("The vale of a + b is: %d\n",a + b);
    printf("The vale of a - b is: %d\n",a - b);
    printf("The vale of a * b is: %d\n",a * b);
    printf("The vale of a / b is: %d\n",a / b);
    printf("The vale of a % b is: %d\n",a % b);

    int z = a*b;
    // a * b = z;  IT IS A NOT CORRECT WAY TO PERFORM OPRATIONS
    printf("The value of z is: %d\n", z);
    
    printf("10 when divided by 6 leaves a remainder of %d\n", 10 % 6);
    printf("10 when divided by 6 leaves a remainder of %d\n", -10 % 6);
    printf("10 when divided by 6 leaves a remainder of %d\n", 10 % -6);

    //  CODE FOR T SHOW THE POWER THERE IS NO ANOTHER WAY TO PERFORM IT
    printf("The value of 6^4 is:%f\n", pow(6, 4));
    return 0;
}