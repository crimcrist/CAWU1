#include <stdio.h>

int main(){
    int tc, N;
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
        scanf ("%d", &N);
        int rightnum = 0, leftnum = 0;
        rightnum = N % 10;
        leftnum = N / 10;
        int sum = rightnum + leftnum;
        printf ("%d\n",sum);
    }
return 0;
}