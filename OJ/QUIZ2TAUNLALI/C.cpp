#include <stdio.h>
#include <string.h>

void stringsort (char arr[][101], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (strcmp (arr[i], arr[j]) > 0){
                char temp [101];
                strcpy (temp, arr[i]);
                strcpy (arr[i], arr[j]);
                strcpy (arr[j], temp);
            }
        }
    }
}

int main (){
   int N;
   scanf ("%d", &N);

   char string[N][101];
   for (int i = 0; i < N; i++){
        scanf ("%s", string[i]);
   }

   stringsort (string, N);

   for (int i = 0; i < N; i++){
        printf ("%s\n", string[i]);
   }
   
    return 0;
}