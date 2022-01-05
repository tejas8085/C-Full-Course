#include <stdio.h>

int main(){

    int i = 0;
    for ( i = 0; i < 50; i++)
    {
        printf("%d\n", i);

        if (i== 30)
        {
           break;
        }
        
    }
    
    return 0;
}