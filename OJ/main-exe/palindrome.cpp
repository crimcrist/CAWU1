#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
5
makam
kakak
malam
katak
makan
*/

int main (){
	int t;
	int count_alpha [26] = {};
	int count_num [9] = {};
	int count_palin = 0;
	scanf ("%d", &t);
	for (int tc = 0; tc < t; tc++){
		char word [1005];
		scanf ("%s", word);
		int l = strlen (word);
		int flag = 1;
		int count = 0;
		for (int i = 0, j = l-1; i <= j;i++, j--){
			if (tolower(word[i]) == tolower(word[j])){
				flag = 0;
				count++;
			}
		}
	printf ("%d", count);	
	}
}
