#include <stdio.h>

int main()
{

    int a = 3, b = 20;

    if (a == b && a != b)
    {
        printf("a is equal to b\n");
    }
    
    else if (a == b)
    {
        printf("a is equal to b\n");
    }
    else if (a > b)
    {
        printf("a is greater than b\n");
    }
    // else if (a < b)
    // {
    //     printf("a is less than b\n");
    // }
    else if (a != b)
    {
        printf("a is not equal to b\n");
    }
    else if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }
    else if (a <= b)
    {
        printf("a is less than or equal to b\n");
    }
    else
    {
        printf("a is not less than or equal to b\n");
    }
    return 0;
}