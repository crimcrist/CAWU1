#include <stdio.h>

int main (){
    double T,R,H;
    double luaspermukaan;
    scanf ("%lf",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lf %lf", &R, &H);
        luaspermukaan = 2*3.14*R*(R + H);
        printf ("Case #%d: %.2lf\n", i, luaspermukaan);
    }
}