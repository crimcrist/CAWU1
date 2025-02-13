#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int Q;
        char S[1005]; 
        scanf("%d %s", &Q, S);

        for (int j = 0; j < Q; j++) {
            int start, end;
            scanf("%d %d", &start, &end); 

            start--; 
            end--;   
            
            while (start < end) {
                char temp = S[start];
                S[start] = S[end];
                S[end] = temp;
                start++;
                end--;
            }
        }

        printf("Case #%d: %s\n", tc, S);
    }
return 0;
}