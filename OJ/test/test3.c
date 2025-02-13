#include <stdio.h>
int main (){
    int s, m,h;
    scanf ("%d", &s);
    m = s/60 % 60;
    h = s/3600 % 24;
    printf ("%02d:%02d:%02d\n", h, m, s % 60);
}