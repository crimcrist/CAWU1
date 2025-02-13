#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

bool polind(char word[1010]) {
    int l = strlen(word);
    
    for (int i = 0, j = l - 1; i < j; i++, j--) { 
        if (word[i] != word[j]) { 
            return false; 
        }
    }
    
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int tc = 0; tc < t; tc++) {
        char word[1005];
        scanf("%s", word);
        
        bool polindrome = polind(word); // Check if the word is a palindrome
        printf("Case #%d: ", tc + 1);
        
        if (polindrome) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}
