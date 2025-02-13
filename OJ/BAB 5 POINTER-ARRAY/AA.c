#include <stdio.h>

int main (){
    long long int N;
    scanf ("%lld", &N);
    long long int nothappy = 0; 
    long long int happy = 0; 
    long long int A[N]; 
    for (int i = 0; i < N; i++){
        scanf ("%lld", &A[i]);
    }

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            if (A[i] == A[j]){ 
                nothappy++;
                break;
            }  
        }  
    }
    happy = N - nothappy;
    printf ("%lld\n", happy);
    return 0;
    }
    