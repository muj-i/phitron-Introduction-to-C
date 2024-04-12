//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);
    if(X >= 'a' && X <= 'z') {
        printf("%c\n", X - 32);
    } else {
        printf("%c\n", X + 32);
    }
    return 0;
}
