#include <stdio.h>

int main (){
    int T = 3;
    int X,P;
    int hasil;
    scanf ("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf ("%d %d",&X, &P);
        hasil = (X >> P) & 1;
        printf ("%d\n",hasil);

    }
}