#include <stdio.h>

int main(){

    int a, i = 0;
    printf("Enter the final number : ");
    scanf("%d", &a);

    while (i<=a)
    {
       
        printf("%d\n", i);
        i++;
    }
    

    return 0;
}