#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 0)
    {
        if (a % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("You need to take one non-negative integer (0 or greater than 0)\n");
    }
}