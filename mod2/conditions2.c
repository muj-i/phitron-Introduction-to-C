#include <stdio.h>

int main()
{

    int money;
    printf("Money: ");
    scanf("%d", &money);

    if (money >= 5000)
    {
        printf("We will go for a tour");
        if (money >= 10000)
        {
            printf(" in Paris\n");
        }
        else
        {
            printf(" in Dubai\n");
        }
    }

    else
    {
        printf("We can't go anywhere\n");
    }

    return 0;
}