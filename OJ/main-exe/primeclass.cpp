#include <stdio.h>

int main (){
    long long int n;
    scanf ("%lld", &n);
    long long count = 2;
    if (n == 1){
        count = 1;
    } if (n % 2 == 0){
        count++;
    }

    for (int i = 3; i*i <= n; i+=2)
    {
       if (n % i == 0)
       {
        count++;
        break;
       }
    }
    if (count == 2){
        printf ("prime\n");
    } else {
        printf ("nonprime\n");
    }
}