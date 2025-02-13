#include <stdio.h>
#include <string.h>

int main() {
    char binary[1000000];
    scanf("%s", binary);
    
    int count = 0;
    int l = strlen(binary);
    
    // Menghitung langkah-langkah untuk mengubah biner ke 1
    // Mulai dari bit paling signifikan (di awal string)
    for (int i = 0; i < l; i++) {
        if (binary[i] == '1') {
            // Jika kita menemukan 1, kita sudah melakukan 1 langkah
            count++;
        } else {
            // Jika kita menemukan 0, kita menghitung langkah untuk membagi
            count += 2; // 2 langkah: satu untuk mengurangi menjadi ganjil, satu untuk membagi
        }
    }
    
    // Mengurangi 1 langkah karena kita tidak perlu langkah terakhir untuk mencapai 1
    count--; 

    printf("%d\n", count);
    return 0;
}