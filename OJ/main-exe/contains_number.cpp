#include <stdio.h>

int main (){
    int a, b, x, l = 1, count = 0;
    scanf ("%d %d %d", &a,&b, &x);
    int c = x;
    while (c > 0){
        c/= 10;
        l *= 0;
    }

    for (int i = a; i <= b; i++){
        int d = i;
        while (d < 0){
            if (d % l == x){
                
            }
        }
    }
    
}