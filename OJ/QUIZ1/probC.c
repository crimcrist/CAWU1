#include <stdio.h>

int main () {
    int t;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        int x[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }

        for (int j = 0; j < n-1;) {
            if (x[j] == x[j+1]) {
                count++;
                j += 2;
            } else {
                j++;
            }
        }

        printf("Case #%d: %d\n", tc, count);
    }
    
}