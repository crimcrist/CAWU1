#include <stdio.h>
#include <stdbool.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        int a = 1000001;
        bool sum[a] = {false};
        int count = 0;  
        scanf("%d", &N);
        
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (!sum[num]) {
                sum[num] = true;
                count++;
            }
        }
        printf("Case #%d: %d\n", t, count);
    }

    return 0;
}