#include <stdio.h>

int main (){
int N , Q;
scanf ("%d", &N);
int jumlah_day_tayangan[N];
for (int i = 0; i < N; i++)
{
    scanf ("%d", &jumlah_day_tayangan[i]);
}
    scanf ("%d", &Q);
    int A, B;
    for (int j = 0; j < Q; j++)
    {
        scanf ("%d %d", &A, &B);
        int temp = 0;
        printf ("Case #%d: ", j+1);
        for (int k = A-1; k <= B-1; k++)
        {
    
            temp += jumlah_day_tayangan[k];   
        }
        printf ("%d\n", temp);
    }
} 