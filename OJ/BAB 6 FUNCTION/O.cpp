#include <stdio.h>

int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

char grid[105][105];
int visited[105][105];
int N, M;

int kotak(int x, int y) {
  
    if (x < 0 || x >= N || y < 0 || y >= M) {
        return 0;
    }
    
    if (visited[x][y] || grid[x][y] == '#') {
        return 0;
    }

    visited[x][y] = 1;
    int foodCount = (grid[x][y] == '*') ? 1 : 0;

    for (int i = 0; i < 4; i++) {
        foodCount += kotak(x + directions[i][0], y + directions[i][1]);
    }

    return foodCount;
}

int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        scanf("%d %d", &N, &M);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf(" %c", &grid[i][j]); 
            }
        }

        int X = -1, Y = -1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 'P') {
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
                visited[i][j] = 0;
            }
        }

        int totalFood = kotak(X, Y);
        printf("Case #%d: %d\n", i + 1, totalFood);
    }
    return 0;
}
