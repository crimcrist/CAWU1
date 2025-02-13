#include <stdio.h>

int main(){
    int jumlah_musik,persentase_kesabaran;
    int jumlah_durasi = 0;
    int durasi_maks = 0;
    scanf ("%d %d", &jumlah_musik, &persentase_kesabaran); getchar();
    int durasi[jumlah_musik + 1];
    for (int i = 0; i < jumlah_musik; i++){
        scanf ("%d", &durasi[i]); getchar();
        jumlah_durasi += durasi[i];
    } 

    durasi_maks = jumlah_durasi*persentase_kesabaran;
    durasi_maks /= jumlah_musik * 100;
    printf ("%d\n", durasi_maks);

    for (int i = 0; i < jumlah_musik; i++){
    if (durasi_maks < durasi[i]){
        printf ("%d ", i+1);
    }

    }
    
   
    
}