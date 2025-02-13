#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++) {
        char simpan[256] = {0}; 
        char sample[100005];
        int count = 0;
        
        scanf("%s", sample);
        for (int j = 0; sample[j] != '\0'; j++){
           if (simpan[sample[j] - 'a'] == 0) {
            count++;
            simpan[sample[j] - 'a'] = 1;
           }

        }
        if (count % 2 == 0) {
            printf("Case #%d: Yay\n", tc+1);
        }else {
            printf("Case #%d: Ewwww\n", tc+1);
        }
    }
    
    return 0;
}