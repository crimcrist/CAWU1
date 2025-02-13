#include <stdio.h>
#include <string.h>

int main (){
    char word [100];
    char huruf [26] = {};

    scanf ("%s", word);
    int l = strlen (word);

    for (int i = 0;i < l ;i++){
			if (word[i] >= 'a' && word[i] <= 'z'){
				huruf[word[i] - 'a']++; 
		} 
    for (int i = 0 ; i < 26 ; i++){
        if (huruf[i] > 0)
    }

    for i = 0 ; i < l - 1 ; i++
    j = i + 1; i < l
}