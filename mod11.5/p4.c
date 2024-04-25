#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int count[M + 1];
    for (int i = 1; i <= M; i++) {
        count[i] = 0;
    }

    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}