#include <stdio.h>
#include <stdbool.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        long long int N;
        scanf("%lld", &N);
        
        int num[10005] = {0}; 

        long long int numbers[100];
        for (int i = 0; i < N; i++) {
            scanf("%lld", &numbers[i]);
            num[numbers[i]]++; 
        }

        long long int cool_count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i != j) {
                    long long int sum = numbers[i] + numbers[j];
                    if (sum < 10005 && num[sum] > 0) {
                        cool_count++;
                        num[sum]--; 
                    }
                }
            }
        }
        
        printf("Case #%d: %lld\n", t, cool_count);
    }
    
    return 0;
}
