#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    printf("\n\n === Find right combination ===\n\n");
    int answer;
    int treatment = rand() % 4;

    int cntShowBottle = 0;
    int prevCntShowBottle = 0;

    for(int i = 1; i <= 3; i++)
    {
        int bottle[4] = {0,0,0,0};
        do
        {
            cntShowBottle = rand() % 2 + 2;
        }
        while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;

        int isIncluded = 0;
        printf(" > No. %d try ", i);

        for (int j = 0; j < cntShowBottle; j++)
        {
            int randBottle = rand() % 4;

            if(bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if(randBottle == treatment)
                {
                    isIncluded = 1;
                }
            }
            else
            {
                j--;
            }
        }

        for (int k = 0; k < 4; k++)
        {
            if(bottle[k] == 1)
                printf("%d ", k + 1);
        }

        printf(" use the treatments\n\n");

        if (isIncluded == 1)
        {
            printf(" >> success! find right treatment\n");
        }
        else
        {
            printf(" >> wrong ! worng treatment!!\n");
        }

        printf("\n.....enter any key to continue.....");
        getchar();
    }

    printf("\n\n what number is right treatment? ");
    scanf_s("%d", &answer);

    if(answer == treatment + 1)
    {
        printf("\n >> right!\n");
    }
    else
    {
        printf("\n >> wrong! answer is %d\n",treatment + 1);
    }
    
    return 0;
}