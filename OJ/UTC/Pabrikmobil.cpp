#include <stdio.h>

int main(){
    int A, B, C;
    scanf ("%d %d %d", &A, &B, &C);

    int ban = 4;
    int pintu = 2;
    int kaca = 1;

    int maxmobil = A / ban;
    if (maxmobil < (B/pintu)){
        maxmobil = B/pintu;
    } else if (maxmobil < (C/kaca)){
        maxmobil = C/kaca;
    }

    int kurangban = A - (maxmobil * ban);
    int kurangpintu = B - (maxmobil * pintu);
    int kurangkaca = C - (maxmobil * kaca);

    int buyban = 0, buypintu = 0, buykaca = 0;
    if (kurangban < 0){
        buyban = kurangban*(-1);
    }
    if (kurangpintu < 0){
        buypintu = kurangpintu*(-1);
    } 
    if (kurangkaca < 0){
        buykaca = kurangkaca*(-1);
    }

    printf ("%d %d %d %d\n", maxmobil, buyban, buypintu, buykaca);
}