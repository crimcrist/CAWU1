#include <stdio.h>
#include <string.h>

struct Data {
    char N[1005];
    int jumlahMakanan;
    int hargaMakanan;
    int totalharga;
};

int main() {
    int T;
    scanf("%d", &T);
    struct Data dat[1005];

    for (int i = 0; i < T; i++) {
        scanf("%s %d %d", dat[i].N, &dat[i].jumlahMakanan, &dat[i].hargaMakanan);
        dat[i].totalharga = dat[i].jumlahMakanan * dat[i].hargaMakanan;
    }

    for (int i = 0; i < T - 1; i++) {
        int maxIndex = i; 
        for (int j = i + 1; j < T; j++) {
            if (dat[j].totalharga > dat[maxIndex].totalharga) {
                maxIndex = j;
            }
        }
        
        if (maxIndex != i) {
            struct Data Temp = dat[i];
            dat[i] = dat[maxIndex];
            dat[maxIndex] = Temp;
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%s %d\n", dat[i].N, dat[i].totalharga);
    }

    return 0;
}
