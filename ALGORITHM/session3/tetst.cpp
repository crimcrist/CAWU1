#include <stdio.h>

int main (){
    int fibo, fibo1, temp;
    int n;
    fibo = 0;
    fibo1 = 1;
    temp = 0;
    int i;
    scanf ("%d", &n);
    printf ("%d %d", fibo, fibo1);
    for (int i = 1; i < n -1 ; i++){
       temp = fibo + fibo1;
       printf ("%d ", temp);
       fibo = fibo1;
       fibo1 = temp;
       
    }
    
}