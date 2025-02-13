#include <stdio.h>

int main (){
   long long int T,N,K, huruf;
   char c[1000];
   scanf ("%lld", &T);
   for (int tc = 0; tc < T; tc++)
   {
    scanf ("%lld %lld",&N, &K);
    scanf ("%s", c);
    printf ("Case #%d: ", tc+1);
    for (int j = 0; j < N; j++)
    {
        huruf = ( c[j] - 97) + K;
        huruf %= 26;
        c[j] = huruf + 'a';
    }
    printf ("%s", c);
    huruf = 0;
    printf ("\n");
   }
   return 0;
}