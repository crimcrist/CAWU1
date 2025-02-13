#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        long long int N;
        scanf("%lld", &N);

        long long int numbers[10005];
        for (int i = 0; i < N; i++) {
            scanf("%lld", &numbers[i]);
        }

        long long int sum = 0;
        int found;
        for (int i = 0; i < N; i++) {
            found = 0;
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++){
                   if ( j != k && numbers[i] == numbers[j] + numbers[k]){
                    found = 1;
                    break;
                   }
                }
            if (found == 1){
                break;
            }
            } 
            if (found == 1){
                sum++;
            }
        }
        
        printf("Case #%d: %lld\n", t, sum);
    }
    return 0;
}
