#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

int n, m;
char floor[MAX][MAX];
bool visited[MAX][MAX];

int red_count = 0, green_count = 0, blue_count = 0;

bool is_valid(int x, int y, char target) {
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && (floor[x][y] == '_' || floor[x][y] == target);
}

void flood_fill(int x, int y, char color) {
    visited[x][y] = true;
    if (color == 'M') red_count++;
    else if (color == 'H') green_count++;
    else if (color == 'B') blue_count++;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (is_valid(nx, ny, color)) {
            flood_fill(nx, ny, color);
        }
    }
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (!file) {
        printf("File not found!\n");
        return 1;
    }

    // Membaca ukuran lantai
    fscanf(file, "%d %d", &n, &m);

    // Membaca peta lantai
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s", floor[i]);
    }
    fclose(file);

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) {
                if (floor[i][j] == 'M') {
                    flood_fill(i, j, 'M');
                } else if (floor[i][j] == 'H') {
                    flood_fill(i, j, 'H');
                } else if (floor[i][j] == 'B') {
                    flood_fill(i, j, 'B');
                }
            }
        }
    }

    // Output hasil
    if (green_count > blue_count || (green_count == blue_count && green_count > red_count)) {
        if (red_count > blue_count) {
            printf("Hijau: %d\nMerah: %d\nBiru: %d\n", green_count, red_count, blue_count);
        } else {
            printf("Hijau: %d\nBiru: %d\nMerah: %d\n", green_count, blue_count, red_count);
        }
    } else if (blue_count > red_count || (blue_count == red_count && blue_count > green_count)) {
        if (green_count > red_count) {
            printf("Biru: %d\nHijau: %d\nMerah: %d\n", blue_count, green_count, red_count);
        } else {
            printf("Biru: %d\nMerah: %d\nHijau: %d\n", blue_count, red_count, green_count);
        }
    } else {
        if (green_count > blue_count) {
            printf("Merah: %d\nHijau: %d\nBiru: %d\n", red_count, green_count, blue_count);
        } else {
            printf("Merah: %d\nBiru: %d\nHijau: %d\n", red_count, blue_count, green_count);
        }
    }

    return 0;
}
