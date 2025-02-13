#include <stdio.h>

int main(){
    int T,N;
    int count;
    scanf ("%d",&T);
    for (int tc = 0; tc < T; tc++)
    {
        int count = 0;
        scanf ("%d", &N); 
        int A[N], B[N];
        for (int j = 0; j < N; j++)
        {
           scanf ("%d", &A[j]);
        }

        for (int j = 0; j < N; j++)
        {
           scanf ("%d", &B[j]);
        }
        printf ("Case #%d: ",tc+1);

        for (int j = 0; j < N; j++)
        {
            if (A[j] < B[j])
            {
                count++;
            }
        }
            printf ("%d\n", count);
    }   
}