#include <stdio.h>
#include <string.h>

int main (){
    long long int T;
    scanf ("%lld", &T);
    
    for (int i = 1; i <= T; i++)
    { 
        char N [1000001];
        scanf ("%s", N);
        int length = strlen(N);
        int oddsnumber = 0, evensnumber = 0;
        printf ("Case #%d: ", i);
        for (int j = 0; j <= length; j++)
        {
            if (j%2 == 0) {
                oddsnumber += N[j];
            } else {
                evensnumber += N[j];
            }
        }

        int diff = oddsnumber - evensnumber;
        
        if (diff % 11 == 0)
        {
            printf ("Yeah\n");
        } else {
            printf ("Nah\n");
        }   
    }
return 0;
}