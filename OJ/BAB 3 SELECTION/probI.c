#include <stdio.h>

int main (){
    int T;
    double A,B,C;
    scanf ("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf ("%lf %lf %lf",&A,&B,&C);
        B /= 100;
        if (A*B > C)
        {
            printf ("Case #%d: %.0lf\n",i,C);
        }
        else 
        {
            printf ("Case #%d: %.0lf\n",i,A*B);
        }        
    }
return 0;    
}