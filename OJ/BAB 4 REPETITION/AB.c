#include <stdio.h>

int main (){
    int T;
    int N,A,B,C,D;
    scanf ("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d %d %d %d %d", &N, &A, &B, &C, &D);
        int mainanbuang = 0;
        for (int j = 1; j <= N; j++)
        {
            if ( j%A == 0 ||  j%B == 0 || j%C == 0 || j%D == 0)
            {
                mainanbuang++;
            }
        }
            printf ("Case #%d: %d",i, mainanbuang);
            return 0;
        
    }
    
}