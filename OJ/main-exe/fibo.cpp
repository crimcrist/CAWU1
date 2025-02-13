#include <stdio.h>

int main (){
    long long int n;
    scanf ("%lld", &n);
    long long int a,b,c;
    a = 0;
    b = 1;
    for (int i = 0; i < n; i++){ 
        c = a + b;
        a = b;
        b = c;   
        printf ("%lld ", a);
    }
return 0;
}