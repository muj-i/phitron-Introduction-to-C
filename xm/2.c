#include <stdio.h>
#include <string.h>



int main() {
    char S[100001];
    scanf("%s", S);
    int consonantCount = 0;

    for (int i = 0; i < strlen(S); i++) {
        if (!isVowel(S[i])) {
            consonantCount++;
        }
    }
    printf("%d\n", consonantCount);
    return 0;
}

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}