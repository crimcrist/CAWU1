#include <stdio.h>
#include <string.h>

int main (){
    long long int T;
    scanf ("%lld",&T);
    for (int i = 0; i < T; i++)
    {
        char N [1000001];
        scanf ("%s", N);
        int lenght = strlen (N);
        int oddsnumber = 0, evensnumber = 0;
            for (int j = 0; j < lenght; j++)
            {
               if (j % 2 == 0)
                {
                oddsnumber += N[j] - '0';
                } else {
                evensnumber += N[j] - '0';
                }
            }
            int diff = oddsnumber - evensnumber;
            printf ("Case #%d: ", i+1);
        if (diff % 11 == 0)
        {
            printf ("Yeah\n");
        } else{
            printf ("Nah\n");
        }  
    }
    
}