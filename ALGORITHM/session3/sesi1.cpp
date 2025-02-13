#include <stdio.h>

int main (){
    int a;
    scanf ("%d", &a);
    if (a >= 85 && a<= 100)
    {
        printf ("A\n");
    }else if (a >= 75 && a < 85)
    {
        printf ("B\n");
    }else if (a >= 65 && a< 75)
    {
        printf ("C\n");
    }else if (a >= 50 && a < 65)
    {
        printf ("D\n");
    }else if (a >= 0 && a < 50)
    {
        printf ("E\n");
    }
    
}