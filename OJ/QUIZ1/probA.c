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
	int count_alpha [26] = {};
	int count_num [9] = {};
	int count_palin = 0;
        count_palin = 0;
		char word [1005];
		scanf ("%s", word);
		int l = strlen (word);
		int i;
		for (i = 0;i < l ;i++){
			if (word[i] >= 'a' && word[i] <= 'z'){
				count_alpha [word[i] - 'a']++; 
		} //else if(word[i]>='0' && word[i]<='9'){
		// 	    count_num[word[i]-'0']++;
		// }
		}
        for (i = 0; i < 26; i++){
            if (count_alpha[i] > 0){
                count_palin++;
            }
        }

        //  for (i = 0; i < 9; i++){
        //     if (count_num[i] > 0){
        //         count_palin++;
        //     }
        // }
        int j;
        for (i = 0; i < l - 1; i++){
            for (j = i+1 ; j < l; j++)
            {
                if (tolower(word[i]) == tolower(word[j]) && tolower(word[i+1])==tolower(word[j-1])){
				count_palin++;
			}
            }
		}
	printf ("%d\n", count_palin);	
return 0;
}
