#include <stdio.h>

int main(){

    int marks[5];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter the marks of the students \n");
        scanf("%d", &marks[i]);
    }

   for (int i = 0; i <= 5; i++)
    {
        printf("The marks of the students are %d\n", marks[i]);
        
    }
    return 0;
}