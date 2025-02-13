#include <stdio.h>

int main (){
    int N;
    int putar;
    long long int posisi = 0;
    scanf ("%d",&N);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%d",&putar);
        posisi += putar;
    
        if (posisi == 9)
        {
            posisi = 21;
        }
        else if (posisi == 33)
        {
            posisi = 42;
        }
        else if (posisi == 76)
        {
            posisi = 92;
        }
        else if (posisi == 53)
        {
            posisi = 37;
        }
        else if (posisi == 80)
        {
            posisi = 59;
        }
        else if (posisi == 97)
        {
            posisi = 88;
        }
    }
    printf ("%lld\n",posisi);
    return 0;
}