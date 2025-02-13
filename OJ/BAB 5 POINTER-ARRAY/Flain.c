#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++) {
        char sample[100005];
        int count = 0;
        scanf("%s", sample);
        int l = strlen (sample);
        for (int j = 0; j < l; j++){
            for (int k = j+1; k < l; k++)
            {
            if (sample[j] == sample[k]) {
            count++;
            break;
            }
            }
        
        }
        if ((l-count) % 2 == 0) {
            printf("Case #%d: Yay\n", tc+1);
        } else {
            printf("Case #%d: Ewwww\n", tc+1);
        }
    }

    return 0;
}