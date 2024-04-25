#include <stdio.h>
#include <string.h>

int main() {
    char X[21], Y[21];

    scanf("%s %s", X, Y);
    int result = strcmp(X, Y);

    if (result < 0)
        printf("%s\n", X);
    else if (result > 0)
        printf("%s\n", Y);
    else 
        printf("%s\n", X); 

    return 0;
}
