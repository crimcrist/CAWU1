#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main (){
    char S [100];
    scanf ("%[^\n]", S);
    int l = strlen (S);
    char word[100];
    int j = 0;
    for (int i = 0; i <= l; i++){
        if (S[i] == ' ' || S[i] == '\0'){
        word [j] = '\0'; 
    }
    }
        
    int flag = 1;
    for (int i = 0, j = l-1; i <= j; i++, j--){
        if (word[i] == word[j]){
            flag = 0;
            }
    }
        if (flag == 0){
            printf ("Yes\n");
        }else {
            printf ("No\n");
        }
        
    return 0;
}