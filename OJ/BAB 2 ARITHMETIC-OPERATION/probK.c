#include <stdio.h>

int main (){
    double X, Y;
    scanf ("%lf %lf", &X, &Y);
    for (int i = 1; i <= 3 ;i++)
    {
        X += X*Y/100;
    }
    printf ("%.2lf\n", X);
return  0;
}