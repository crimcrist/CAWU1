#include <stdio.h>
#include <string.h>

int main (){
    char binary[100];
    scanf ("%s", binary);
    long long int num = 0, factor = 1;
    int l = strlen(binary);
    for (int i = l-1; i >= 0; i--)
    {
       num += factor * (binary[i] - '0');
       factor *= 2;
    }
    printf ("%lld\n", num);
    return 0;
}