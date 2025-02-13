#include <stdio.h>
#include <string.h>

int abs(int a) {
    if (a < 0) return -a;  
    return a; 
}

struct Player {
    char name[300];
    int score;
};

int binarySearch(struct Player players[], int n, char name[]) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2; 
        int cmp = strcmp(players[m].name, name);
        if (cmp == 0) {
            return m;  
        } else if (cmp < 0) {
            l = m + 1; 
        } else {
            r = m - 1; 
        }
    }
    return -1; 
}

int main() {
    int T;
    scanf("%d", &T); 

    struct Player players[T]; 
    for (int i = 0; i < T; i++) {
        scanf("%s %d", players[i].name, &players[i].score);
    }

    int M;
    scanf("%d", &M); 

    for (int i = 0; i < M; i++) {
        char P1[300], P2[300];
        scanf("%s %s", P1, P2); 

        if (strcmp(P1, P2) == 0) {
            printf("not valid\n"); 
            continue;
        }

        int idx1 = binarySearch(players, T, P1);
        int idx2 = binarySearch(players, T, P2);

        if (idx1 == -1 || idx2 == -1) {
            printf("not found\n"); 
        } else {
            int scoreGap = abs(players[idx1].score - players[idx2].score);
            int boardGap = abs(idx1 - idx2);
            printf("%d %d\n", scoreGap, boardGap); 
        }
    }

    return 0;
}
