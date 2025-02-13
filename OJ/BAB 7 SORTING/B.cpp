#include <stdio.h>
#include <string.h>

int main (){
    FILE *file;
    file = fopen ("testdata.in", "r");
     
    int N;
    fscanf (file,"%d\n",&N);

    long long int R[1005];
    char M [1005][100];
    for (int i = 0; i < N; i++){
        fscanf (file,"%lld#%[^\n]\n",&R[i], M[i]);
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1; j++){
            if (strcmp (M[j], M[j+1]) > 0){
            char temp[100];
            strcpy (temp, M[j]);
            strcpy (M[j], M[j+1]);
            strcpy (M[j+1], temp);
            long long temp1 = R[j];
            R[j] = R[j+1];
            R[j+1] = temp1;
            }
        }
     }

     for (int i = 0; i < N; i++){
        printf ("%lld %s\n",R[i], M[i]);
     }

fclose(file);
return 0;
}