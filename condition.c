#include <stdio.h>
#include <time.h>

int main(void)
{   
    //int age = 15;
    /*int age = 25;
    if(age >= 20)
    {
        printf("im not a student\n");
    }
    else
    {
        printf("im a student\n");
    }*/

    // if, else if, else
    /*int age = 29;
    if (age >= 8 && age <= 13)
    {
        printf("elementary school student\n");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("middle school student\n");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("high school student\n");
    }
    else 
    {
        printf("not student\n");
    }*/

    /*for (int i = 1; i <= 30; i++)
    {
        if (i >= 6) 
        {
            printf("bye\n");
            break;
        }
        printf("%d\n", i);
    }*/

    /*for (int i = 1; i <= 30; i++)
    {
        if ( i >= 6 && i <= 10)
        {
            if (i == 7) 
            {
                printf("No. %d student didn't come\n", i);
                continue;
            }
            printf("No. %d student is here\n", i);
        }
    }*/

    // Rock 0 paper 1 scissors 2
    srand(time(NULL));
    int i = rand() % 3; // return 0 ~ 2

    switch (i)
    {
        case 0: printf("rock\n"); break;
        case 1: printf("paper\n"); break;
        case 2: printf("scissors\n"); break;
        default : printf("i don't know"); break;
    }
    return 0;
}