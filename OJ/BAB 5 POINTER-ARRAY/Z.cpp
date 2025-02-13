#include <stdio.h>

int main(){
    int T, N,K;
    scanf ("%d", &T);
    for (int t = 1; t <= T; t++){
        scanf("%d %d", &N, &K);
        char langkah[10005];
        scanf("%s", langkah);

        int firstcount = -1;
        int lastcount = -1;
        int count = 0;
        for (int i = 0; i < N; i++){
            if (langkah[i] == '1' ){
                firstcount = i + 1;
                break;
            }
        }

        for (int i = N-1; i >= 0; i--){
             if (langkah[i] == '1' ){
                lastcount = i;
                break;
            }
        }

         for (int i = 0; i < N; i++){
             if (langkah[i] == '1' ){
                count++;
            }
        }

        printf ("Case #%d: ", t);

        if (K >= N) {
            printf("Alive\n");
        } else if (firstcount == -1) {
            printf("Dead\n");
        } else if (firstcount <= K && (N - lastcount) <= K && count != 1) {
            printf("Alive\n");
        } else {
            printf("Dead\n");
        }
    }
return 0;    
}