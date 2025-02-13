#include <stdio.h>

/*
8 8
.....*..
........
.*...*..
..*.....
........
*....*..
.*......
.....*..

0001*100
11102200
1*211*10
12*11110
12110000
*2101*10
2*102210
11101*10
*/

int main (){
    int n, m;
    char board [105][105];
    scanf ("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf ("%s", board[i]);
    }
    int calc [105][105];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if (board[i][j] == '*')
        {
           calc[i][j] = -1; 
        } else {
            int count = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k >= 0 && k< n && l >= 0 && l < m && board[k][l] == '*'){
                        count++;
                    }
                }
            
            } 
            calc [i][j] = count;
            board[i][j] = count + '0';
        }
       }  
       printf ("%s\n", board[i]); 
    }
    printf ("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (calc[i][j] == -1)
            {
                printf ("*");
            } else{
                printf ("%d", calc[i][j]);
            }
        }
    printf ("\n");
    }
    return 0;
}