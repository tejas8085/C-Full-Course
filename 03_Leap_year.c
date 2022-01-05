#include <stdio.h>

int main(){

    int year;
    float mon;
    printf("Plz Enter year Here :");
    scanf("%d", &year);
    
    mon = year % 4;
    if (mon == 0)
    {
        printf("Your entered year is leap year");
    }
    else if (mon != 0)
    {
        printf("oops! , Your enterd year is not leap year");
    }
    
    
    else
    {
        printf("something went wrong");
            }
    
    return 0;
}