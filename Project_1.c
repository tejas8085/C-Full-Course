#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100+1;

    printf("The number %d \n", number);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Plz guess the lower number\n");
        }
        else if (guess<number)
        {
            printf("Plz guess the higher number\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    
    return 0;
}