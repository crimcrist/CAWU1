#include <stdio.h>

int main (){
    double A,B;
    double T = 3;
    scanf("%lf",&T);
    for (int i = 0; i < 3; i++)
    {
        scanf ("%lf %lf", &A, &B);
        printf ("%.2lf\n", (A*B)/360);
    }
return 0;
}