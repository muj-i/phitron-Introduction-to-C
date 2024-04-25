#include <stdio.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T); // Input the number of test cases

    while (T--) {
        char S[10001];
        scanf("%s", S); // Input the string for each test case

        int capital_count = 0, small_count = 0, digit_count = 0;
        for (int i = 0; S[i] != '\0'; i++) {
            if (isupper(S[i])) // Check if character is uppercase alphabet
                capital_count++;
            else if (islower(S[i])) // Check if character is lowercase alphabet
                small_count++;
            else if (isdigit(S[i])) // Check if character is a digit
                digit_count++;
        }

        printf("%d %d %d\n", capital_count, small_count, digit_count); // Output counts for current test case
    }

    return 0;
}
