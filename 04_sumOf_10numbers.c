#include <stdio.h>

int main(){
  
    // BY USING FOR LOOP
     
    // int i, sum= 0;
    // for ( i = 0; i <= 10; i++)
    // {
    //     sum += i; 
    // }
    // printf("The sum of 1 to 10 is :%d", sum);
    

    // BY USING WHILE LOOP

    // int i=0, sum=0;
    // while (i<=10)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("The sum of 1 to 10 is :%d", sum);

    // BY USING DO WHILE LOOP

    int i=0, sum=0;

    do
    {
        sum += i;
        i++;
    } while (i<=10);
    
    printf("The sum of 1 to 10 is :%d", sum);

    return 0;
}