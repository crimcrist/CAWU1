#include <stdio.h>

int main (){
    long long int T, K;
    long long int meterfrog, counter=0;
    scanf ("%lld", &T);
    for (int i = 1; i <= T; i++)
    {
        meterfrog = 0;
        scanf ("%lld",&K);
        counter=0;
        for (int j=1; meterfrog < K ;j++){
        	meterfrog += j;
        	counter++;
		}
        printf("Case #%d: %lld\n", i, counter);
    }
    
}
