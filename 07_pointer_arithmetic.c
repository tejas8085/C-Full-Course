#include <stdio.h>

int main(){

    int a = 34;
    int *ptr = &a;
    printf("The value of ptr is %u\n", ptr);
    ptr +=1;
    printf("The value of ptr is %u\n", ptr);
    ptr -=1;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    ptr--;
    printf("The value of ptr is %u\n\n", ptr);

    char c = 't';
    char *pcr = &c;
    printf("The value of pcr is %u\n", pcr);
    pcr +=1;
    printf("The value of pcr is %u\n", pcr);
    pcr -=1;
    printf("The value of pcr is %u\n", pcr);
    pcr++;
    printf("The value of pcr is %u\n", pcr);
    pcr--;
    printf("The value of pcr is %u\n\n", pcr);

    float b = 4.5;
    float *pfr = &b;
    printf("The value of pfr is %u\n", pfr);
    pfr +=1;
    printf("The value of pfr is %u\n", pfr);
    pfr -=1;
    printf("The value of pfr is %u\n", pfr);
    pfr++;
    printf("The value of pfr is %u\n", pfr);
    pfr--;
    printf("The value of pcr is %u\n\n", pfr);
    return 0;
}