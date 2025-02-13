#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    char S [50];
    scanf ("%[^\n]", S);
    int l = strlen (S);
    for (int i = 0; i < l; i++){
        if (S[i] >= 'A' && S[i] <= 'Z'){
            S[i] = tolower(S[i]);
        } else if (S[i] >= 'a' && S[i] <= 'z'){
            S[i] = toupper(S[i]);
    }
    }    
    printf ("%s", S);

}