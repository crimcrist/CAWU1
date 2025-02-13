#include <stdio.h>

int main (){
    int T;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int min = 0 , count = 0, n, a;
        scanf ("%d",&n);
        for (int j = 0; j < n; j++)
        {
            scanf ("%d", &a);
            if (a > min){
                min = a;
                count = 1;
            } else if (a == min){
                count++;
            }
        }
        printf ("Case #%i: %d\n", i ,count);
    }
return 0;  
}