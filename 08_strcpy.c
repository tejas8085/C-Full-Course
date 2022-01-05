#include <stdio.h>
#include <string.h>

int main(){

    char *str = "Tejas";
    char str2[20];
    strcpy(str2, str);
    printf("Now yhe str2 is : %s", str2);

    return 0;
}