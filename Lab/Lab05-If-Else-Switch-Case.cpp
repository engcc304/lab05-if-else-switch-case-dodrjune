


#include <stdio.h>

int main()
{
    int score = 0;
    printf("enter score : \n");
    scanf("%d", &score);
    if (score >= 80)
    {
        printf("A !");
    }
    else if (score <= 79 && score >= 75)
    {
        printf("B+ !");
    }
    else if (score <= 74 && score >= 70)
    {
        printf("B !");
    }
    else if (score <= 69 && score >= 65)
    {
        printf("C+ !");
    }
    else if (score <= 64 && score >= 60)
    {
        printf("C !");
    }
    else if (score <= 59 && score >= 55)
    {
        printf("D+ !");
    }
    else if (score <= 54 && score >= 50)
    {
        printf("D !");
    }
    else if( ! score)
    {
        printf("please enter number only. ");
    }
    else{
        printf("F !");
    }
    return 0;
} // end main function