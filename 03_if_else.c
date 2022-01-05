#include <stdio.h>

int main(){

    int age ;
    printf("Enter your age: ", age);
    scanf("%d", &age);

    if (age == 18)
    {
        printf("You are eligible for vote");
    }
    
    else
    {
        printf("You are not able for vote");
    }
    
    return 0;
}