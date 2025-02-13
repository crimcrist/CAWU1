#include <stdio.h>

int main (){
    int X,Y;
    scanf ("%d %d", &X, &Y); 
    int T[X][Y];
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++){
            scanf ("%d", &T[i][j]);
        }
    }
    int N;
    scanf ("%d", &N);
    int a,b,angka;
    for (int i = 0; i < N; i++){
        scanf ("%d %d %d", &a, &b, &angka);
        T[a-1][b-1] = angka;
        }
    for (int i = 0; i < X; i++){
        for (int j = 0; j < Y; j++)
        {
        printf ("%d", T[i][j]);
        if ( j < Y - 1){
        printf (" ");
        }
        }
        printf ("\n");
    }
}