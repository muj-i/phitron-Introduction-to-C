#include <stdio.h>

int main()
{

    int money;
    printf("Money: ");
    scanf("%d", &money);

    if (money >= 50000)
    {
        printf("We will go for a tour\n");
        if (money >= 10000)
        {
            printf("We will go to Paris\n");
        }
        else
        {
            printf("We will go to Dubai\n");
        }
    }

    else
    {
        printf("We can't go anywhere\n");
    }

    return 0;
}