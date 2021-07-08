#include <stdio.h>


void p(int num);
void function_without_return();
int function_with_return();

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void) 
{
    // function

    //int num = 2;
    //printf("num is %d\n", num);
    //p(num);

    //num = num + 3;
    //printf("num is %d\n", num);
    //p(num);

    //num -= 1;
    //printf("num is %d\n", num);
    //p(num);

    //num *= 3;
    //printf("num is %d\n", num);
    //p(num);

    //num /= 6;
    //printf("num is %d\n", num);
    //p(num);

    //function_without_return();

    //int num = function_with_return();
    //p(num);

    // calculator
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    return 0;
}

void p(int num)
{
    printf("num is %d\n", num);
}

// void function
void function_without_return()

{
    printf("no return\n");
}

int function_with_return() 
{
    printf("with return\n");

    return 10;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}