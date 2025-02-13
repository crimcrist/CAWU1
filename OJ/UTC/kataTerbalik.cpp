#include <stdio.h>
#include <string.h>

int main(){
    char S [100];
    scanf ("%[^\n]", S);
    int l = strlen (S);
    char word[100];
    int j = 0;
    for (int i = 0; i <= l; i++){
        if (S[i] == ' ' || S[i] == '\0'){
         word [j] = '\0';
         for (int k = j-1; k >= 0; k--){
           printf ("%c", word[k]);
         }

        if (S[i] == ' '){
            printf (" ");
        }
        j = 0;
        } else {
            word[j++] = S[i];
        }
        
    }
    
}