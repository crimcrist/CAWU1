#include <stdio.h>


void name(){
	
}

// recursive
// function yang memanggil diri sendiri

// faktorial
int faktorial(int N){
	if (N == 1) return 1;
	return N * faktorial(N-1); // recursive call
}

// fibonnacci
int fibonnacci (int N){
	if (N == 0){
		return 0;
	}else if (N == 1){
		return 1;
	}
	return fibonnacci (N-1)+ fibonnacci (N-2); // recursive call
}

char map [10][11] = {
	"##########",
	"#        #",
	"#####    #",
	"#        #",
	"#    #####",
	"#        #",
	"#######  #",
	"#        #",
	"#        #",
	"##########",
};

void printMap(){
	for(int i = 0; i < 10; i++){
		printf ("%s\n", map[i]);
	}
}

//floodfill
void floodfill (int x, int y){
	if (map[y][x] == '#'|| map[y][x] == '.')return;
	else if (map[y][x] == ' ') {
	map [y][x] = '.';
	printMap();	
	}
	
	floodfill(x,y-1); // atas
	floodfill(x,y+1); // bawah
	floodfill(x + 1,y); // kanan
	floodfill(x - 1,y); // kanan
}
char PLAYER = 'P';
int pX = 1;
int pY = 1;

void printMap1(){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (j == pX && i == pY) printf ("%c", PLAYER);
			else printf ("%c", map[i][j]);
		}
		printf ("\n");
	}
}

void logic(){
	char input;
	while(1){
	printMap1();
		scanf ("%c", &input); getchar();
		if (input == 'a' && map[pY][pX -1] != '#') pX--;
		else if (input == 'd'&& map[pY][pX+1] != '#') pX++;
		else if (input == 'w'&& map[pY - 1][pX] != '#') pY--;
		else if (input == 's' && map[pY + 1][pX] != '#') pY++;
	}
}

int main (){
	//	int n = 5;
	//	printf ("%d\n", faktorial(n));
	//	printf ("%d\n", fibonnacci (n));
	//	printMap();
	//	floodfill(1, 1);
	logic();
	
}
