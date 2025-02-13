#include <stdio.h>

int main (){
    double L, B, H;
    scanf ("%lf %lf %lf", &L, &B, &H);
    printf ("%.3lf\n",(B*H)+(B*L*3));
    return 0;
}