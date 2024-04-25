#include <stdio.h>
#include <string.h>

int main() {
char S[10001];
scanf("%s", S); 

int counts[26] = {0}; 
int length = strlen(S);

for (int i = 0; i < length; i++) {
    if (S[i] >= 'a' && S[i] <= 'z') {
    counts[S[i] - 'a']++; 
    }
}
for (int i = 0; i < 26; i++) {
    if (counts[i] > 0) {
    printf("%c - %d\n", 'a' + i, counts[i]);
    }
}


    return 0;
}
