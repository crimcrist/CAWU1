#include <stdio.h>

int main (){
    int num;
    scanf ("%d", &num);
    int binary [100], l = 0;
    while (num > 0){
    //printf ("%d", num % 2);
    binary [l] = num & 1;
    l++;
    num >>= 1;
    }
    for (int i = l-1; i >= 0 ; i--)
    {
       printf ("%d", binary[i]);
    }
    printf("\n");
    return 0;
}