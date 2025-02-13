#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int tc = 1; tc <= T; tc++) {
        char string[1005];
        scanf("%s", string);
        int length = strlen(string);
        char pesan[1005]; 
        char key[1005];      

        for (int i = 0; i < length; i++) {
            if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
                pesan[i] = string[i]; 
                key[i] = '0'; 
            } else { 
                if (string[i] >= 'A' && string[i] <= 'D') {
                    pesan[i] = 'A';
                    key[i] = (string[i] - 'A') + '0';
                } else if (string[i] >= 'E' && string[i] <= 'H') {
                    pesan[i] = 'E'; 
                    key[i] = (string[i] - 'E') + '0';
                } else if (string[i] >= 'I' && string[i] <= 'N') {
                    pesan[i] = 'I'; 
                    key[i] = (string[i] - 'I') + '0'; 
                } else if (string[i] >= 'O' && string[i] <= 'T') {
                    pesan[i] = 'O'; 
                    key[i] = (string[i] - 'O')+ '0';
                } else if (string[i] >= 'U' && string[i] <= 'Z') {
                    pesan[i] = 'U'; 
                    key[i] = (string[i] - 'U') + '0';
                }
            }
        }
        
        pesan[length] = '\0';
        key[length] = '\0'; 

        printf("Case #%d:\n", tc);
        printf("%s\n", pesan);
        printf("%s\n", key);
    }
    
    return 0;
}
