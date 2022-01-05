#include <stdio.h>

int main(){

    char ch;
    printf("Eneter the character :");
    scanf("%c",&ch);
    if (ch>='a' && ch<= 'z')
    {
       printf("Lowercase");
    }
    else if (ch>= 'A' && ch<= 'Z')
    {
        printf("UPPERCASE");
    }
    else
    {
        printf("not valid");
    }
    
    
    return 0;
}