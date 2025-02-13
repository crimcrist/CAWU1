#include <stdio.h>

/*int main (){
    long long int N, M =1;
    long long int total;
    scanf ("%d", &N); 
    total = (M << N);   
    printf ("%lld\n", total - 1);
return 0;
}
*/

int main (){
    int N, total = 1;
    scanf ("%d", &N);
    for (int i = 1; i <= N; i++)
    {
      total *= 2;
    }
    printf ("%d\n", total-1);
}