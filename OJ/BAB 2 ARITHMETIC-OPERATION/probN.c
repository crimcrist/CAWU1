#include <stdio.h>
 int main (){
    double A,B;
    scanf ("%lf %lf",&A,&B);
    printf ("%.2lf%%\n",(A-B)*100/A);
    return 0;
 }