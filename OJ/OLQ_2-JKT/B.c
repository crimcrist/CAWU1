#include <stdio.h>

int main (){
    char S [15];
    int T = 5;
    for (int i = 0; i < T; i++)
    {
       scanf ("%s", &S);
       printf ("%10s|%s\n",S, S);
    }
}
