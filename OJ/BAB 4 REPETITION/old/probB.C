#include <stdio.h>

int main (){
    int N;
    int putar;
    int posisi = 0;
    scanf ("%d",&N);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%d",&putar);
        posisi += putar;
        if (posisi==12)
        {
            posisi = 28;
        } 
        else if (posisi == 35)
        {
            posisi = 7; 
        }
        else if (posisi == 30)
        {
            posisi = 10;
        }
        if (posisi >= 40)
        {
            posisi -= 40;
        }
    }
        printf ("%d\n",posisi);
}