#include <stdio.h>

int main (){
    int N;
    int jojo,lili,bibi;
    int nilaipesertalain;
    int total = 0;
    scanf ("%d",&N);
    scanf ("%d %d %d", &jojo, &lili, &bibi);
    for (int i = 1; i <= N; i++)
    {
        scanf ("%d", &nilaipesertalain);
        total += nilaipesertalain;
    }
    total = (total + jojo + lili + bibi)/ (N + 3);
    if (jojo >= total)
    {
        printf ("Jojo lolos\n");
    } else {
        printf ("Jojo tidak lolos\n");
    }
     if (lili >= total)
    {
        printf ("Lili lolos\n");
    } else {
        printf ("Lili tidak lolos\n");
    }
     if (bibi >= total)
    {
        printf ("Bibi lolos\n");
    } else {
        printf ("Bibi tidak lolos\n");
    }
    
    
}