#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    file = fopen ("testdata.in", "r");

    int N;
    fscanf (file,"%d\n", &N);
    char nim[105][105], nama[105][105];

    for (int i = 0; i < N; i++){
       fscanf (file, "%s %s\n", nim[i], nama[i]); 
    }

    int tc;
    fscanf (file, "%d\n", &tc);
    for (int i = 0; i < tc; i++){
        char cari [105];
        fscanf (file, "%s\n", cari);
        printf ("Case #%d: ", i + 1);
        int flag = 1;

        for (int j = 0; j < N; j++){
            if (strcmp (cari, nim[j]) == 0){
                printf ("%s\n", nama[j]);
                flag = 0;
                break;
            }   
        } 
        if (flag == 1) printf ("N/A\n");
    }
    return 0;
}