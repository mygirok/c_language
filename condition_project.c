#include <stdio.h>
#include <time.h>

int main(void)
{
    // Up and Down
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    printf("number : %d\n", num);
    int answer = 0;
    int chance = 5;
    while (1)
    {
        printf("%d change(s) left\n", chance--);
        printf("guess the number : ");
        scanf("%d", &answer);

        if (answer > num)
        {
            printf("DOWN ↓\n\n");
        }
        else if (answer < num)
        {
            printf("UP ↑\n\n");
        }
        else if (answer == num)
        {
            printf("That's right\n\n");
            break;
        }
        else
        {
            printf("error");
        }

        if (chance == 0)
        {
            printf("don't have change. Failed");
            break;
        }
    }
    return 0;
}