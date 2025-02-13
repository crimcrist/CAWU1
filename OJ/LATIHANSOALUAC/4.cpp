#include <stdio.h>

int temp = 0;
void mapping(int map[][1000], int x, int y, int n){
	if(x < 0 || x >= n || y < 0 || y >= n) return;
	if(map[x][y]==0) return;
	
	temp++;
	map[x][y] = 0;
	mapping(map, x+1, y, n);
	mapping(map, x-1, y, n);
	mapping(map, x, y+1, n);
	mapping(map, x, y-1, n);
}


int main(){
	FILE *file = fopen("testdata.in", "r");
	
	int n ;
	fscanf(file, "%d\n", &n);

	int board [n+5][1000];
	int countmax = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			fscanf(file, "%d", &board[i][j]);
		}
		fscanf(file, "\n");
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(board[i][j] == 1){
				mapping(board, i, j, n);
			}
            
			if (countmax < temp){
			    countmax = temp;	
			}
            temp = 0;
		}
	}
	printf("%d\n", countmax);
	
}