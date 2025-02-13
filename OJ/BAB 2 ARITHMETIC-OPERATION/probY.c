#include <stdio.h>

int main(){
    int T = 3;
    double P,N;
    scanf ("%d",&T);
    for (int i = 0; i < 3; i++)
    {
        scanf ("%lf %lf", &P, &N);
        double result = (P*N)/100;
        printf ("%.2lf\n", result);

    }
   return 0; 
}