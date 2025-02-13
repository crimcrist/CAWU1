#include <stdio.h>

int main (){
    long long int n;
    scanf ("%lld", &n);
    if (n%n == 0 && n%1 == 0)
    {
        if (n == 2)
        printf ("prime\n");
        else if (n%2 == 0)
        printf ("not prime\n");
        else
        printf ("prime\n");
    }
return 0;
}
