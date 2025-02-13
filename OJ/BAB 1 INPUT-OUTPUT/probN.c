#include <stdio.h>

int main() {
    char N1[200], N2[200];
    double U1,U2;
    int G1,G2;
    scanf ("%s %lf %d %s %lf %d",&N1,&U1,&G1,&N2,&U2,&G2);
    printf ("Name 1: %s\n",N1);
    printf ("Height 1: %.2lf\n", U1);
    printf ("Age 1: %d\n" ,G1);
    printf ("Name 2: %s\n",N2);
    printf ("Height 2: %.2lf\n", U2);
    printf ("Age 2: %d\n" ,G2);

    return 0;
}