#include <stdio.h>

int main(){

    int marks[5];
    int *ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of the %d student :\n ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of the %d student is : %d\n", i+1, marks[i]);
    }
    
    
    return 0;
}