#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        
        int values[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &values[i]);
        }
        
        int box1 = -1000001;
        int box2 = -1000001;
        
        for (int i = 0; i < N; i++) {
            if (values[i] > box1) {
                box2 = box1;
                box1 = values[i];
            } else if (values[i] > box2) {
                box2 = values[i]; 
            }
        }
        
        int max_sum = box1 + box2;
        printf("Case #%d: %d\n", tc, max_sum);
    }
    
    return 0;
}