#include <stdio.h>

int main()
{

    int rating;
    printf("Enter your rating for  oue survice :", rating);
    scanf("%d", &rating);
    switch (rating)
    {
    case 5:
        printf("thanks!, Your rating is 5 \n");
        break;
    case 4:
        printf("thanks!, Your rating is  4 \n");
        break;
    case 3:
        printf("thanks!, Your rating is  3\n");
        break;
    case 2:
        printf("thanks!, Your rating is 2 \n");
        break;
    case 1:
        printf("thanks!, Your rating is 1\n");
        break;

    default:
        printf(" plz Enter valid rating options betwoon  one to five");
        break;
    }
    return 0;
}