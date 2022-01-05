#include <stdio.h>

int main(){
    int skip = 30;
    int i= 0;
    while (i<=50)
    {
       
        if (i!= skip)
            continue;
        else
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}
