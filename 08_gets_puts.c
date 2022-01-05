#include <stdio.h>

int main(){

    char str[30];
    printf("Enter your name ");
    gets(str);
    puts(str);
    printf("%s", str);
    return 0;
}