#include <stdio.h>
#include <string.h>

/*
binus university school of computer science
BinusUniversitySchoolOfComuterScience
*/
int main (){
    char word [1005];
    scanf ("%[^\n]", word);
    int l = strlen(word);
    for (int i = 0; i < l; i++)
    {
        if (word[i] == ' ')
        {
            word[i + 1] -= 32;
            continue;
        }
        printf ("%c", word[i]);
    }
    printf ("\n");

    char words [100][100];
    char *temp = strtok (word," ");
    int n = 0;
    while (temp != NULL){
        strcpy (words[n], temp);
        temp = strtok (NULL," ");
        n++;
    }

    for (int i = n-1; i >= 0; i--)
    {
        printf ("%s\n", words [i]);
    }
    
    int main() {
    char words[10][50];
    int count = 0;
    int i;

    while (scanf("%s", words[count]) == 1) {
        count++;
        if (getchar() == '\n') {
            break;
        }
    }
    for (i = count - 1; i >= 0; i--) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}