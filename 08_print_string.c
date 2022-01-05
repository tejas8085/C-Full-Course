#include <stdio.h>

int main(){

    // char str1[] = {'T', 'e', 'j', 'a', 's','\0'};
    char str1[] = "Tejas";

    char *ptr = str1;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}