#include <stdio.h>

int main (){
    int a,b,c,d,T;
    double result;
    scanf ("%d",&T);
    for (int i = 0; i < 3; i++)
    {
         scanf ("%d %d %d %d",&a,&b,&c,&d);
         result = 2.0*a/1 + 4.0*b/2 + 4.0*c/3 + 2.0*d/4;
         printf ("%.2lf\n", result);
    }
  return 0;   
}
do
{
  /* code */
} while (/* condition */);
