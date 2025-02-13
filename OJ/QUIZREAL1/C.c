#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
int T, N;
scanf ("%d", &T);
for (int tc = 0; tc < T; tc++)
{
    scanf ("%d", &N);
    int M[N];
    int sum [10001];
    int count = 0;   
    
    for (int j = 0; j < N - 1; j++){
        sum[j] = 0;
    }

    for (int j = 0; j < N - 1; j++){
        scanf ("%d", &M[j]);
        if (sum[M[j]] != M[j + 1]){
             count++;
             sum [M[j]] = M[j+1];
           
        }
    }
    printf ("Case #%d: %d\n", tc+1, count);
}
return 0; 
}