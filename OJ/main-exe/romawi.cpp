#include <stdio.h>

int main (){
    // I = 1
    // V = 5
    // X = 10
    // L = 50
    // C = 100
    // D = 500
    // M = 1000
    int num;
    printf("Enter a number (1-3999): ");
    scanf("%d", &num);

    // Validasi input
    if (num < 1 || num > 3999) {
        printf("Number out of range (1-3999)\n");
        return 1;
    }

    // Array dari nilai Romawi
    int values[15] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    // Array dari simbol Romawi
    char symbols[15][20] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Menentukan jumlah elemen dalam arrays
    int size = sizeof(values) / sizeof(values[0]);

    // Proses konversi
    for (int i = 0; i < size; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}