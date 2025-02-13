#include <stdio.h>

int main (){
    int T,N,A;
    int genap, ganjil;
    scanf ("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf ("%d", &N); 
        genap = 0;
        ganjil = 0;
        for (int j = 0; j < N; j++)
        {
            scanf ("%d", &A);
            if (A%2 == 0){
                genap++;
            } else{
                ganjil++;
            }
        }
        printf ("Odd group : %d integer(s).\n", ganjil);
        printf ("Even group : %d integer(s).\n\n", genap);
        
    }
    
}