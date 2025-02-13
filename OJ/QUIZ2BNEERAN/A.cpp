#include <stdio.h>
#include <string.h>

struct Data {
    char N[1105];
    int jumlahMakanan;
    int hargaMakanan;
    int totalharga;
};

int main() {
    int T;
    scanf("%d", &T); getchar ();
    struct Data dat[1105];

    for (int i = 0; i < T; i++) {
        scanf("%s %d %d", dat[i].N, &dat[i].jumlahMakanan, &dat[i].hargaMakanan); getchar ();
        dat[i].totalharga = dat[i].jumlahMakanan * dat[i].hargaMakanan;
    }

    for (int i = 0; i < T - 1; i++) {
        for (int j = 0; j < T - i - 1; j++) {
            if (dat[j].totalharga < dat[j + 1].totalharga) {
                struct Data Temp = dat[j];
                dat[j] = dat[j + 1];
                dat[j + 1] = Temp;
            }
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%s %d\n", dat[i].N, dat[i].totalharga);
    }

    return 0;
}
