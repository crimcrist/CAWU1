#include <stdio.h>

int main (){
    int T;
    scanf ("%d", &T);
    for (int tc = 1; tc <= T; tc++){
    int N, M, Q;
    scanf ("%d %d %d", &N, &M, &Q);
    int arr[105][105];    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf ("%d", &arr[i][j]);
        }
    }
    int count[105];
    for (int i = 0; i < Q; i++){
        scanf ("%d", &count[i]);
    }

    int lampu[105] = {0};

    for (int i = 0; i < Q; i++){
        int friendIndex = count[i] - 1;
       for (int j = 0; j < M; j++){
        if (arr[friendIndex][j] == 1){
            lampu[j] = 1 - lampu[j];
        }
       }
    }

    printf ("Case #%d:\n", tc);
    for (int i = 0; i < M; i++){
        if (lampu[i] == 1){
            printf ("YES\n");
        }else{
            printf ("NO\n");
        }
    }
    }
}