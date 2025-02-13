#include <stdio.h>

int main (){
    char pembilang [100][100] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};
    int N;
    scanf ("%d", &N);
    int satuan = 0;
    int puluhan = 0;
    int ratusan = 0;
     int ribuan = 0;

     satuan = N % 10;
     N /= 10;

     puluhan = (N % 10) * 10;
     N /= 10;

     ratusan = (N % 10) * 100;
     N /= 10;

     ribuan = N * 1000;


     printf ("%d %d %d %d\n", ribuan, ratusan, puluhan, satuan);
     if (ribuan > 0){
        if (ribuan / 1000 == 1) printf ("Seribu ");
        else printf ("%s Ribu ", pembilang [ribuan/1000]);
     }

     if (ratusan > 0){
        if (ratusan / 100 == 1) printf ("Seratus ");
        else printf ("%s Ratus ", pembilang [ratusan/100]);
     }

     if (puluhan > 0){
        if (puluhan > 12) printf ("%s puluh", pembilang [puluhan/ 10]);
        else printf ("%s ", pembilang [puluhan]);
     }
     
     if (satuan > 0){
        printf ("%s\n", pembilang[satuan]);
     }
     return 0;
}