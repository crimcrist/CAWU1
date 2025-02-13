#include <stdio.h>

int main (){
    long long int T, N, M;
    long long int price;
    long long int total;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++){
        total = 0;
        scanf ("%lld %lld", &N, &M); 
        for (int j = 1; j <= N; j++){
        scanf ("%lld", &price);
        total += price;}
        if (total > M) 
            printf ("Case #%d: Wash dishes\n", i);
        else if (total <= M) 
            printf ("Case #%d: No worries\n", i);
        }
}