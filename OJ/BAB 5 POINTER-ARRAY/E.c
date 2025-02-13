#include <stdio.h>

int main (){
    int T, X; 
    scanf ("%d", &T);
    for (int tc = 1; tc <= T; tc++)
    {
        scanf ("%d", &X);
        int a [X][X];
        int count [X];
        
        for (int i = 0; i < X; i++){
            count[i] = 0;
        }
        
        for (int i = 0; i < X; i++){
           for (int j = 0; j < X; j++){
            scanf ("%d", &a[i][j]);
           }
        }
   
        for (int i = 0; i < X; i++){
            for (int j = 0; j < X; j++){
                count[i] += a[j][i];
            }
        } 
        printf ("Case #%d: ", tc);
        for (int i = 0; i < X; i++){
            if (i ==  X-1){
                printf ("%d\n", count[i]);
            } else {
                printf ("%d ", count[i]);
            }
        }
        
       printf ("\n");
    }
    
}