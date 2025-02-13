#include <stdio.h>

int main (){
    int N;
    scanf ("%d", &N); 
    int check = 1;
    for (int i = 0; i < N; i++){
        int bil;
        scanf ("%d", &bil);
        if (bil == 1){
            check = 0;
        }
    }
    if (check == 0){
        printf ("not easy\n");
    } else {
        printf ("easy\n");
    }
    
}