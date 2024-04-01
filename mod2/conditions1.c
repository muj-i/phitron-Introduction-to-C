#include <stdio.h>

int main()
{

    int money;
    printf("Money: ");
    scanf("%d", &money);

    if (money == 1000)
    {
        printf("You have 1000 dollars\n");
    }
    else if (money > 1000)
    {
        printf("You have more than 1000 dollars\n");
    }
    else if (money < 1000 && money > 0)
    {
        printf("You have less than 1000 dollars\n");
    }
    else
    {
        printf("You have no money\n");
    }

    return 0;
}