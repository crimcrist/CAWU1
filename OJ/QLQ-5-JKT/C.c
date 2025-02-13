	#include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    int main(){
    int t;
	scanf ("%d", &t);
	for (int tc = 0; tc < t; tc++){
		char word [1005];
		scanf ("%s", word);
		int l = strlen (word);
		int flag = 1;
		for (int i = 0, j = l-1; i <= j;i++, j--){
			if (tolower(word[i]) != tolower(word[j])){
				flag = 0;
				break;
			}
		}
        printf ("Case %d: ", tc+1);
		if (flag == 0){
			printf ("no\n");
        } else {
            printf ("yes\n");
		}
    }
    }