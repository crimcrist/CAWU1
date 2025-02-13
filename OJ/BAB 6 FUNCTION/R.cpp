#include <stdio.h>

int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

char flood[105][105];
int check[105][105];
int N, M;

int kotak(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M) {
        return 0;
    }
    
    if (check[x][y] || flood[x][y] == '#') {
        return 0;
    }

    check[x][y] = 1;
    int keramik = (flood[x][y] == '.') ? 1 : 0;

    for (int i = 0; i < 4; i++) {
        keramik += kotak(x + directions[i][0], y + directions[i][1]);
    }

    return keramik;
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        scanf("%d %d", &N, &M);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf(" %c", &flood[i][j]); 
            }
        }

        int X = -1, Y = -1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (flood[i][j] == 'S') {
                    X = i;
                    Y = j;
                    break;
                }
            }
            if (X != -1) {
                break;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                check[i][j] = 0;
            }
        }

        int total = kotak(X, Y);
        printf("Case #%d: %d\n", i + 1, total);
    }
    return 0;
}
