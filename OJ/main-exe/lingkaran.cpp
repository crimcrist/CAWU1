#include <stdio.h>

int main (){
    int r;
    scanf ("%d", &r);
    for (int i = r; i >= -r; i--)
    {
        for (int j = -r; j <= r ; j++)
        {
            if (j*j + i*i <= r*r)
            {
                printf ("*");
            } else {
                printf (" ");
            }
        }
    printf ("\n");
    }
    
}