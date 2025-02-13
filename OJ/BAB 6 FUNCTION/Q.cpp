#include <stdio.h>

int minCount = 8;
void chess(int count, int x1, int y1, int x2, int y2) {
    if (minCount < count) return; 
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) return; 
    if (x1 == x2 && y1 == y2) {
        if (count < minCount) minCount = count;
        return;
    }

    chess(count + 1, x1 + 2, y1 + 1, x2, y2);
    chess(count + 1, x1 + 2, y1 - 1, x2, y2);
    chess(count + 1, x1 - 2, y1 + 1, x2, y2);
    chess(count + 1, x1 - 2, y1 - 1, x2, y2);

    chess(count + 1, x1 + 1, y1 + 2, x2, y2);
    chess(count + 1, x1 + 1, y1 - 2, x2, y2);
    chess(count + 1, x1 - 1, y1 + 2, x2, y2);
    chess(count + 1, x1 - 1, y1 - 2, x2, y2);
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        minCount = 8;
        char col1, col2;
        int row1, row2;
        scanf(" %c%d %c%d", &col1, &row1, &col2, &row2); 

        int x1 = col1 - 'A' + 1;
        int y1 = row1; 
        int x2 = col2 - 'A' + 1; 
        int y2 = row2; 

        chess(0, x1, y1, x2, y2); 

        printf("Case #%d: ", i + 1);
        printf ("%d\n", minCount);
    }
    return 0;
}
