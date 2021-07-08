#include <stdio.h>
#include <time.h>


int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
    // open the doors

    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);

        showQuestion(i, num1, num2);

        int answer = -1;
        scanf_s("%d", &answer);

        if (answer == -1)
        {
            printf("exit this game");
            exit(0);
        }
        else if (answer == num1 * num2)
        {
            success();
            count++;
        }
        else
        {
            fail();
        }
    }

    printf("\n\n You opened %d out of 5\n", count);

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n##### No.%d door password #####\n\n\n", level);
    printf("\n\t%d X %d is ?\n" , num1, num2);
    printf("\n\n\n\#############################\n");
    printf("\n enter the password (exit : -1) >> ");
}

void success()
{
    printf("\n >> Good !");
}

void fail()
{
    printf("\n >> wrong answer !");
}