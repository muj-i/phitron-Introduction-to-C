
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
        int n;
        scanf("%d", &n);
        int i = 1;
        while (i <= n) {
            if ( i % 5 == 0) {
                printf("%d Yes\n", i );
            } else {
                printf("%d No\n", i);
            }
            i++;
        }
        return 0;
}
