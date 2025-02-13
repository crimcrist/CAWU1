#include <stdio.h>

int main (){
   double N,P;
   //diketahui N adalah diskonnya
   //diketahui P adalah harga akhir
   for (int i = 0; i < 4; i++)
   {
        scanf ("%lf %lf", &N, &P);
        double harga = P*100/(100-N);
        printf ("$%.2lf\n", harga);
   }

   return 0;
}