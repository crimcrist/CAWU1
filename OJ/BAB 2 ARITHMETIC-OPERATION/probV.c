#include<stdio.h>

int main(){
    float A;
    float T = 3;
    scanf ("%f",&T);
    for (int i = 0; i < 3; i++)
    {
        scanf ("%f",&A);
        printf ("%.2lf ", 0.8*A);
        printf ("%.2lf ", 1.8*A + 32);
        printf ("%.2lf\n", A+273);
    }
    
    return 0;
}