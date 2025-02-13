#include <stdio.h>

int main (){
    int x,y,k;
    scanf ("%d %d %d",&x,&y,&k);
    if ( x>k || y<k || (k-x)!= (y-k))
    printf ("-1\n");
    else if ((k-x)==(y-k))
    printf ("%d\n",k-x);
    return 0;
}