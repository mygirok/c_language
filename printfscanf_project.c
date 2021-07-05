#include <stdio.h>

int main(void)
{
    //project
    //write about me
    char name[256];
    printf("What is your name? ");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("What is your age? ");
    scanf_s("%d", &age);

    float weight;
    printf("What is your weight? ");
    scanf_s("%f", &weight);

    double height;
    printf("What is your height? ");
    scanf_s("%lf", &height);

    char major[256];
    printf("What are you majoring in? ");
    scanf_s("%s", major, sizeof(major));

    //info output
    printf("\n\n-----MY INFORMATION-----\n");
    printf(" Name      :%s\n", name);
    printf(" Age       :%d\n", age);
    printf(" Weight    :%.2f\n", weight);
    printf(" Height    :%.2lf\n", height);
    printf(" Major     :%s\n", major);

    return 0;
}