#include <stdio.h>

int main (){    
long long int T;
scanf ("%lld", &T);
for (int i = 0; i < T; i++)
{
    long long int N;
    scanf("%lld", &N);
    long long int like [1005]; 
    like [1] = 0;
    like [2] = 1;
    for (int j = 3; j <= N; j++) {
            like[j] = like[j - 1] + like[j - 2];
        }
        printf("Case #%d: %lld\n", i + 1, like[N]);
    }
}