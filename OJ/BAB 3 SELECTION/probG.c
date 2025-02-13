#include <stdio.h>

int main (){
    long long int a,b,c,d;
    scanf ("%lld %lld %lld %lld",&a,&b,&c,&d);
    if ((a*b)>(c-d))
    {
        printf ("False\n");
    }
    else {
        printf ("True\n");
    }
return 0;
}