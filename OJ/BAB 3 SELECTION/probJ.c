#include<stdio.h>

int main (){
    int x,y,k;
    scanf ("%d %d %d",&x,&y,&k);
    int hasil = -1;
    if ((k-x)==(y-k))
    {
        if ((k-x) >= 0)
        {
            hasil = k-x;
        }
    }  
    printf ("%d\n",hasil);
return 0;
}