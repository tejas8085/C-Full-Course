#include <stdio.h>

int force(int m);

int main(){

    int  m;
    printf("Enter the value of mass of a body :");
    scanf("%d", &m);
    
    float result;
    result = force(m);
    printf("The force acting on a body is : %f", result);
    return 0;
}


int force(int m){
    int result;
    float g = 9.8;
    result = m*g;
    return result;
}