#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen ("testdata.in", "r");
    int N;
    char M [100][100], P[100][100], S[100];
    fscanf (file, "%d", &N); fgetc(file);

    for (int i = 0; i < N; i++){
        fscanf (file, "%[^#]#%[^\n]",M[i], P[i]);fgetc (file);
    }

    int T;
    fscanf (file, "%d", &T);fgetc (file);
    for (int i = 0; i < T;i++){
        fscanf (file, "%s", S); fgetc (file);
        printf ("Case #%d: ", i+1);
        int flag = 1;
        for (int i = 0; i < N; i++){
        if (strcmp (S, M[i]) == 0){
            printf ("%s\n",P[i]);
            flag = 0;
           } 
        }

        if (flag == 1) printf ("N/A\n");
    }
    
    return 0;
}