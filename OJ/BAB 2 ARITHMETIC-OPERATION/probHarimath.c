#include <stdio.h>

int main (){
    int a, b, c, d;
    double sum ;
    for (int i = 0; i < 3; i++)
    {
        scanf ("%d %d %d %d",&a,&b,&c,&d);
        sum = 2*a + 4*b/2 + 6*c/3 + 4*d/4;
        printf ("%.2lf\n",sum);
    }

    return 0;
}