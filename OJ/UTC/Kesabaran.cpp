#include <stdio.h>

int main (){
    double N, M;
    scanf ("%lf %lf", &N, &M);
    double K [100];
    double durasiMaks = 0;
    double total = 0;
    for (int i = 0; i < N; i++){
        scanf ("%lf", &K[i]);
        total += K[i];
    }
    double ratarata = total/N;
    M = M/100;
    durasiMaks = ratarata * M;
    printf ("%lf\n", durasiMaks);
    int skip = 0;
    int flag = 0;
    for (int i = 0; i < N; i++){
        if (durasiMaks < K[i]){
            if (i == N - 1){
                printf("%d\n",i+1);
            } else {
                printf("%d ", i+1);   
            }
            flag = 1;
        } 
    }
        if (flag == 0){
            printf ("%d\n", 0);
        }
}