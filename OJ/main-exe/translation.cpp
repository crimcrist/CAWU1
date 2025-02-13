#include <stdio.h>
#include <string.h>

int main (){
   char word [105];
   char reverseWord [105];

    scanf ("%s", word);
    scanf ("%s", reverseWord);

    char write[105];
    int l = strlen(reverseWord);
    for (int i = l - 1, j = 0; i >= 0; i--, j++){
        write[i] = reverseWord[j];
    }
    write[l] = '\0';
    if (strcmp(write, word) == 0){
        printf ("YES\n");
    } else {
        printf ("NO\n");
    }

}