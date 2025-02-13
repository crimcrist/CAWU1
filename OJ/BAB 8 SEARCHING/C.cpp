#include <stdio.h>

int main (){
    int N, M;
    scanf ("%d %d", &N, &M);
    int inbag[1005];
    for (int i = 0; i < N; i++){
        scanf ("%d", &inbag[i]);
    }
   
    int outbag;
    for (int i = 0; i < M; i++){
        scanf ("%d", &outbag);
        for (int j = 0; j < N; j++){
            if (outbag == inbag[j]){
                inbag[j] = 0;
            }
        }
    }

    int max = -1;
    for (int i = 0; i < N; i++){
        if (inbag[i] > max && inbag[i] != 0){
            max = inbag[i];
        }
    }

    printf ("Maximum number is %d\n", max);
}