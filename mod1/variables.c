#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = a + b;
    float height = c * 1.5;
    
    printf("The sum of %d and %d is %d\n", a, b, c);
    printf("Height is %0.2f", height);
    return 0;
}