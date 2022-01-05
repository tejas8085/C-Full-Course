#include <stdio.h>

int main(){

    int i,n= 8, sum = 0;
    printf("********** THE TABLE OF 8 **********\n");
    for ( i = 1; i <= 10; i++)
    {
        printf(" %d\n",n* i );
    }
    for ( i = 8; i <= 80 ; i+= 8)
    {
        sum += i;
        
    }
    
    printf("The sum of table of 8 is %d", sum);
    
    return 0;
}