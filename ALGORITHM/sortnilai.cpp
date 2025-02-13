//sebelum :
//	daniel 90
//	cinfy 100
//	adriel 100
//	
//sesudah :
//	adriel 100
//	cindy 100
//	daniel 90

#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[25];
    int nilai;
};

void printStruct(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s : %d\n", mhs[i].nama, mhs[i].nilai);
    }
}

void swap(Mahasiswa *a, Mahasiswa *b) {
    Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

void sorting(Mahasiswa mhs[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // cek nilai
            if (mhs[j].nilai < mhs[j + 1].nilai) {
                swap(&mhs[j], &mhs[j + 1]);
            } else if (mhs[j].nilai == mhs[j + 1].nilai) {
                if (strcmp(mhs[j].nama, mhs[j + 1].nama) > 0) {
                    swap(&mhs[j], &mhs[j + 1]);
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // membersihkan newline dari input

    Mahasiswa mhs[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", mhs[i].nama, &mhs[i].nilai);
    }

    printf("Sesudah sorting\n");
    sorting(mhs, n);
    printStruct(mhs, n);
    
    return 0;
}

