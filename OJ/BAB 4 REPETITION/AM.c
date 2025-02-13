#include <stdio.h>

int main (){
    int T,N;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%d", &N);
        printf ("Case #%d:\n", i);
            for (long long int j = 1; j <= N; j++)
            {
                if (j % 3 == 0 || j % 5 == 0){
                    if (j%15 == 0){
                        printf ("%d Lili\n", j);
                    }else{
                        printf("%d Jojo\n", j);         
                    } 
                } else {
                    printf ("%d Lili\n", j);
                }
            }
     }
}