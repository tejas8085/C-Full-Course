#include <stdio.h>

int main(){

    int marks;
    printf("Enter your marks :");
    scanf("%d", &marks);

    if (marks>=90 && marks<= 100)
    {
        printf("Excellent!!!");
    }
    else if (marks>=80 && marks <= 90)
    {
        printf("First class!!");
    }
    else if (marks>=70 && marks <= 80)
    {
        printf("secound class!!");
    }
    else if (marks>=60 && marks<= 70)
    {
        printf("Third class!!");
    }
    else if (marks>=40 && marks<= 60)
    {
        printf(" You are passed");
    }
    else if (marks >100)
    {
       printf("PLz enter valid marks");
    }
   
    
    
    else
    {
        printf("You are failed");
    }
    

    return 0;
}