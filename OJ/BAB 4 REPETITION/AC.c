#include <stdio.h>

int main (){
    unsigned long long int T,N,M,permen;
    int i, j;
    scanf ("%lld", &T);
	for (i = 1; i <= T; i++)
    {
        unsigned long long int permenmurah = 0;
        scanf ("%lld %lld",&N ,&M);
        for (j = 1; j <= N; j++)
        {
            scanf ("%lld",&permen);
            if ( j == 1){
                permenmurah = permen;
            }
            else if (permen < permenmurah)
            {
                permenmurah = permen;
            }
        }  
        printf ("Case #%lld: %lld\n", i, M/permenmurah);
    } 
return 0;
}
