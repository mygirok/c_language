#include <stdio.h>

int main(void)
{
    //variable
    /*int age = 12;
    printf("%d\n", age);

    age = 13;
    printf("%d\n", age);

    float f = 46.5f;
    printf("%.2f\n", f);

    double d = 4.428;
    printf("%.2lf\n", d);

    //constant
    const int YEAR = 2000;
    printf("Year of born: %d\n", YEAR);

    //printf
    int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3 + 7);

    //scanf
    int input;
    printf("enter number : ");
    scanf_s("%d", &input);
    printf("input: %d\n", input);*/

    /*int one, two, three;
    printf("enter three interger: ");
    scanf_s("%d %d %d", &one, &two, &three);
    printf("first input: %d\n", one);
    printf("second input: %d\n", two);
    printf("third input: %d\n", three);*/

    //char, string
    char c = 'A';
    printf("%c\n", c);

    char str[256];
    scanf_s("%s", str, sizeof(str));
    printf("%s\n", str);

    return 0;


}