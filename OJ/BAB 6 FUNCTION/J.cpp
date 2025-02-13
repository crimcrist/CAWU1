#include <stdio.h>

long long int epicgame (long long int N){
    if (N == 1) {
        return 0;
    }

    if (N % 2 == 0) {
        return 1 + epicgame(N / 2);
    } else {
        return 1 + epicgame(N * 3 + 1);
    }
}

int main (){
    long long int tc, result;
    long long int N;
    scanf ("%lld", &tc);
    for (int i = 0; i < tc; i++){
        scanf ("%lld", &N);
        result = epicgame(N);
        printf ("Case #%d: ", i+1);
        if (result % 2 == 0){
            printf ("Lili\n");
        }else{
            printf ("Jojo\n");
        }
    }
    
}