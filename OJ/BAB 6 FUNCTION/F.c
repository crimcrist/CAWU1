#include <stdio.h>
#include <string.h>

void reverse(char S[200]) {
    int l = strlen(S);
    for (int i = l - 1; i >= 0; i--) {
        printf("%c", S[i]);
    }
}

int main() {
    int tc;
    char kalimat[1005];
    
    scanf("%d", &tc);
    getchar();
    
    for (int i = 0; i < tc; i++) {
        scanf("%[^\n]", kalimat);
        getchar();
        
        printf("Case #%d: ", i + 1);
        reverse(kalimat);
        printf("\n");
    }
    
    return 0;
}
