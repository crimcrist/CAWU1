#include <stdio.h>


int temp = 0;
void mapping(int map[][1005], int x, int y, int n){
    if (x < 0 || x >= n || y < 0 || y >= n) return;
    if (map[x][y] == 0) return;
    temp++;
    map[x][y] = 0;
    mapping(map, x + 1, y, n);
    mapping(map, x - 1, y, n);
    mapping(map, x , y + 1, n);
    mapping(map, x , y - 1, n);
}


int main (){
    int N;
    scanf ("%d", &N);
    int map[n+5][n+5];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf ("%d", &map[i][j]);
        }
        scanf ("\n");
    }

    int countmax = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (map[i][j] == 1){
                mapping (map, i, j, n);
            }
            if (temp > countmax){
                countmax = temp;
            }

            temp = 0;
        }
    }
    


    

}