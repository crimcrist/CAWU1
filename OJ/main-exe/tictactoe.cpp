#include <stdio.h>

int main (){
    char board[5][5]= {" ", " ", " ", " "};
    int x, y, p = 0;
    do
    {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
        printf ("%c", board[i][j]);
        }
        printf ("\n");
    }
        scanf ("%d %d", &x, &y);
        board [x-1][y-1] = p ? 'O': 'X';
        p++;
        p %= 2;
    } while (1);
    return 0;
}