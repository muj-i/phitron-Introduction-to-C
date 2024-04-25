#include <stdio.h>

int main() {
    int count[26] = {0};
    char c;

    while ((c = getchar())!= '\n') {
        count[c - 'a']++; 
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}