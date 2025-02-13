#include <stdio.h>

struct Pengguna{
    char name[105];
    char pass [105];
}

void covert (char* S){
    int lenght = strlen (S);
    for (int i = 0; i < lenght; i++){
        if (i % 2 == 0){
            S[i] += i + 1;
        }else {
            S[i] -= i + 1;
        }
    }
}

int main(){
    FILE *file = fopen ("testdata.in", "r");
    int N;
    fscanf (file, "%d\n", &N);
    Pengguna user [100];
    for (int i = 0; i < N; i++){
        fscanf (file, "%[^#]#%[^\n]\n", user[i].name, user[i].pass);
     
    }

    int M;
    fscanf (file, "%d", &M);
    char passcov [105];
    for (int i = 0; i < M; i++){
        fscanf (file, "%[^\n]\n", passcov);   
        covert (passcov);
        printf ("Case #%d: ", i+1);
        for (int j = 0; j < N; j++){
            if (strcmp(passcov,user[j].pass) == 0){
                printf ("%s\n", user[j].name);
            }
        }    
    }
    
    
}