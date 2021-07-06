#include <stdio.h>

int main(void)
{   
    // printf("Hello World\n");

    //++
    /*int a = 10;
    printf("a is %d\n", a);
    a++;
    printf("a is %d\n", a);*/

    /*int b = 20;
    printf("b is %d\n", ++b);
    printf("b is %d\n", b++);
    printf("b is %d\n", b);*/

    // loop
    // for, while, do while

    // for
    /*for (int i = 1; i <= 10; i++)
    {
        printf("Hello World %d\n", i);
    }*/

    // while
    /*int i = 1;
    while(i <= 10)
    {
        printf("Hello World %d\n", i++);
        //i++;
    }*/

    // do while
    /*int i = 1;
    do {
        printf("Hello World %d\n", i++);
    } while(i <= 10);*/

    /*for(int i = 1; i <= 3; i++)
    {
        printf("first Loop: %d\n", i);
        for(int j = 1; j <= 5; j++) 
        {
            printf("     second Loop: %d\n", j);
        }
    }*/

    // multiplication table
    // 2 X 1 = 2;
    // 2 X 2 = 4;
    // ...
    // 9 X 9 = 81;

    /*for(int i = 2; i <= 9; i++)
    {
        printf("%d\n", i);
        for(int j = 1; j <= 9; j++)
        {
            printf("     %d X %d = %d\n", i, j, i*j);
        }
    }*/


    /*
    *
    **
    ***
    ****
    *****
    */

   /*for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j <= i; j++)
       {
           printf("*");
       } 
       printf("\n");
   }*/

   /*
       *
      **
     ***
    ****
   *****
   */

  for (int i = 0; i < 5; i++)
  {
      for (int j = i; j < 5 - 1; j++)
      {
        printf(" ");
      }
      for (int k = 0; k <= i; k++)
      {
        printf("*");
      }
      printf("\n");
  }
    return 0;
}