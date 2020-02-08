#include <stdio.h>
#include "Functions.h"

int main()
{
    printf("Hello, World!\n");
    SayHello();
    int a = 1;
    int b = 2;
    printf("a + b = %d\n", AddTwoNumbers(a, b));
    getchar();
    return 0;
}