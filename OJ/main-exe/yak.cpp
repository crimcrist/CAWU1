#include <stdio.h>

int main (){
/*  for (int i = 0; i <= 10; i++){
        if (i%2==1) continue;
        printf ("%d ", i);
    }
    printf ("\n");
} */

int i = 0;
/* 
for (i = 0; i <= 5; i++)
{
    printf ("%d ", i*2);
}
*/
for (;;printf ("a")){
    if (i > 5) break;
    printf ("%d ", i*2);
    i++;
}
}