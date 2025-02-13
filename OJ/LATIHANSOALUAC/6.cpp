#include <stdio.h>

int lokasi = -1;
void mapping (char map [][1000], int x, int y, int n, int m){
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (map[x][y] > lokasi) return;

    lokasi = map [x][y];
    map[x][y] = 9999;
    mapping (map, x+1, y, n, m);
    mapping (map, x-1, y, n, m);
    mapping (map, x, y+1, n, m);
    mapping (map, x, y-1, n, m);
}

int main (){
    FILE *file = fopen ("testdata.in", "r");
    int n, m;
    fscanf (file. "%d %d\n", &n, &m);

    int arr[1000][1000];
    for (int i = 0; i < n; i++){
        for (int j = 0; i < m; i++){
            fscanf (file, "%d", &arr[i][j]);
        }
        fscanf (file, "\n");
    }
    
    int x = 0, y = 0;
    fscanf (file, "%d %d\n", &y, &x);
    lokasi = arr[x][y];
    mapping (arr, x, y, n , m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; i++){
            if (arr[i][j] != 9999) printf (".");
            else printf ("W");
            if (j != m -1) printf (" ");
        }
        printf ("\n");
    }
} 