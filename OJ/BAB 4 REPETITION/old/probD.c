#include <stdio.h>

int main (){
    int N, K;
    int total = 0;
    scanf ("%d", &N);
    for (int i = 1; i <= N; ++i)
    {
        scanf ("%d", &K);
        total += K;
        if (total == 9){
            total = 21;
        } else if (total == 33){
            total = 42;
        } else if (total == 76){
            total = 92;
        }   else if (total == 53){
            total = 37;
        }   else if (total == 80){
            total = 59;
        }   else if (total == 97){
            total = 88;
        }              /* code */
        }
        printf ("%d", total);
    }