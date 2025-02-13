#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word [105];
    scanf ("%[^\n]", word);
    int l = strlen(word);
    for (int i = 0; i < l ; i++){
		//word [i] -= 32;
		if ('a' <= word[i] && word[i] <= 'z'){
			word [i] -= 32;
		}else if('A' <= word[i] && word[i] <= 'Z'){
			word [i] += 32;
		} 
    }
    printf ("%s\n", word);


    for (int i = 0; i < l; i++)
    {
       if ('a' <= word[i] && word[i] <= 'z'){
			word [i] = toupper(word[i]);
		}else if('A' <= word[i] && word[i] <= 'Z'){
			word [i] = tolower(word[i]);
        } 
    } 
    printf ("%s\n", word);
}