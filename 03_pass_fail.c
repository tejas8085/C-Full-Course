#include <stdio.h>

int main(){

    float maths, physics, chemistry, percent;
    printf("Enter your maths marks :\n");
    scanf("%f", &maths);
    printf("Enter your maths marks :\n");
    scanf("%f", &maths);
    printf("Enter your maths marks :\n");
    scanf("%f", &maths);
    
    percent = (maths + physics + chemistry)/3;

    if (percent >= 40 ||  maths >= 33 || physics >= 33 || chemistry >= 33)
    {
        printf("Congratulations! ,You are passed");
    }
    else
    {
        printf("You are Failed");
    }
    
    
    return 0;
}