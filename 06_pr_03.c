#include <stdio.h>

int time(int* a){
    int result = *a;
    *a = result*10;

}

int main(){

    int a=2;
    printf("The value of a before changing is %d\n", a);

    time(&a);
    printf("The value of a after changing is %d\n",a );

    
    return 0;
}