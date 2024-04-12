// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

// Output
// Print the minimum number followed by a single space then print the maximum number.

// inputCopy
// 1 2 3
// outputCopy
// 1 3
// inputCopy
// -1 -2 -3
// outputCopy
// -3 -1
// inputCopy
// 10 20 -5
// outputCopy
// -5 20

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // max
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }
    else
    {
        printf("%d ", C);
    }

    // min
    if (A >= B && A >= C)
    {
        printf("%d\n", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d\n", B);
    }
    else
    {
        printf("%d\n", C);
    }

    return 0;
}
