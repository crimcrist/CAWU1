#include <stdio.h>

int main (){
    int X,Y,Z;
    int hasilX, hasilY,hasilZ;
    scanf ("%d %d %d", &X, &Y, &Z);
    hasilX = X * 5000;
    hasilY = Y * 6000;
    hasilZ = Z * 7000;

    if (hasilX > hasilY && hasilX > hasilZ){
        printf ("%d Apel\n", hasilX);
    }else if (hasilY > hasilX && hasilY > hasilZ){
        printf ("%d Jeruk\n", hasilY);
    } else if (hasilZ > hasilY && hasilZ > hasilX){
        printf ("%d Nanas\n", hasilZ);
    } else if (hasilX == hasilY && hasilX == hasilZ){
        printf ("%d Apel\n", hasilX);
    } else {
        printf ("Cancel\n");
    }


}