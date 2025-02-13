#include <stdio.h>

int main (){
    char C [20];
    int HH1,HH2,MM1,MM2;
    for (int i = 0; i < 5; i++)
    {
        scanf ("%s %02d:%02d-%02d:%02d",C,&HH1,&MM1,&HH2,&MM2);
        printf ("%s %02d:%02d-%02d:%02d\n",C,HH1-1,MM1,HH2-1,MM2);
    }
return 0;
}