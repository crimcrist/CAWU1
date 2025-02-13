#include <stdio.h>

int flag;
void chess(int count, int N, int x1, int y1, int x2, int y2) {
    if (flag) return; 
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) return; 
    if (x1 == x2 && y1 == y2) {
        flag = 1; 
        return;
    }
    if (count == N) return; 

    chess(count + 1, N, x1 + 2, y1 + 1, x2, y2);
    chess(count + 1, N, x1 + 2, y1 - 1, x2, y2);
    chess(count + 1, N, x1 - 2, y1 + 1, x2, y2);
    chess(count + 1, N, x1 - 2, y1 - 1, x2, y2);

    chess(count + 1, N, x1 + 1, y1 + 2, x2, y2);
    chess(count + 1, N, x1 + 1, y1 - 2, x2, y2);
    chess(count + 1, N, x1 - 1, y1 + 2, x2, y2);
    chess(count + 1, N, x1 - 1, y1 - 2, x2, y2);
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        int N;
        scanf("%d", &N); 
        N *= 2; 

        char col1, col2;
        int row1, row2;
        scanf(" %c%d %c%d", &col1, &row1, &col2, &row2); 

        int x1 = col1 - 'A' + 1;
        int y1 = row1; 
        int x2 = col2 - 'A' + 1; 
        int y2 = row2; 

        flag = 0; 
        chess(0, N, x1, y1, x2, y2); 

        printf("Case #%d: ", i + 1);
        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
