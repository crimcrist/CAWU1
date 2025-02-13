#include <stdio.h>

int main (){
int N,i=1,j;
scanf("%d",&N);
while (i<= N)
{
    j = 1;
    while (j <= N)
    {
        printf ("*");
        j++;
    }
    printf("\n");
        i++;
}

return 0;
}