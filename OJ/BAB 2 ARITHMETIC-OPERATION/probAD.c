#include <stdio.h>

int main (){
    int Ph,M,Pu;
    scanf ("%d %d %d", &Ph,&M,&Pu);
    double rata = (double) (Ph*0.2 + M*0.3 + Pu*0.5);
    printf ("%.2lf\n",rata);
    return 0;
}