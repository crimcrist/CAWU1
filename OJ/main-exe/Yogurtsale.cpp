#include <stdio.h>

int main (){
    int tc;
    int n, a, b;
    int sum;
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
        sum = 0;
        scanf ("%d %d %d", &n, &a, &b);
        if (n == 1){
            sum = a;
        }else {
            if (n % 2 == 0){
                sum = (n/2)*b;
            } else if(n % 2 == 1){
                sum = (n/2)*b;
                sum += a;
            }
        }
        printf ("%d\n", sum);
    }   
}