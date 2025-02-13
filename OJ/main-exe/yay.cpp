#include <stdio.h>

int main (){
    int n, a;   
    int max = 0, total = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &a);
        total += a;
        if (a > max){
            max = a;
        }
    }
    printf ("Total: %d\n", total);
    printf ("Max: %d\n", max);
    return 0;
}