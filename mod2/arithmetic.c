#include <stdio.h>

int main() {
    int a = 3, b = 20;
    int sum = a + b;
    printf("The sum is %d\n", sum);
    int mlt = a * b;
    printf("The mlt is %d\n", mlt);
    int sub = a - b;
    printf("The sub is %d\n", sub);
    double div = b * 1.0 / a;
    printf("The div is %lf\n", div);
    int rem = b % a;
    printf("The sum is %d\n", rem);
    return 0;
}