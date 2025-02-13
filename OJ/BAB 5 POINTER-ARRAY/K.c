#include <stdio.h>
#include <string.h>

int main (){
    int T;
    
    scanf ("%d", &T);
    for (int tc = 0; tc < T; tc++)
    {   
        char N[1000];
        scanf ("%s", N);
        int length = strlen(N);  
        printf ("Case #%d : ",tc+1);
        for (int j = length-1; j >= 0; j--)
        {
            printf ("%c", N[j]);
        }
        printf ("\n");
    }
}