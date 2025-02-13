#include <stdio.h>

int main(){
int T, hh, mm, hhfiks;
char aa;
scanf ("%d", &T);
for (int i = 1; i <= T; i++)
{
    scanf ("%d:%d %cm", &hh, &mm, &aa);
     if (aa == 'a') {
            if (hh == 12) {
                hhfiks = 0;
            } else {
                hhfiks = hh;
            }
        } else if (aa == 'p') {
            if (hh == 12) {
                hhfiks = 12;
            } else {
                hhfiks = hh + 12;
            }
        } 
printf ("Case #%d: %02d:%02d\n", i, hhfiks, mm);
}
}