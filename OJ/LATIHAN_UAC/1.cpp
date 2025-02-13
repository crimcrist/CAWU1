#include <stdio.h>
#include <string.h>

struct pengguna {
    char nama [105];
    char pass [25];
}

void convert (char *string){
    int length = strlen (string);
    for (int i = 0; i < length; i++){
        if (i % 2 == 0){
            string[i] += i + 1;
        } else {
            string[i] -= i + 1
        }
    }
    
}

int main (){
    FILE *file = fopen ("testdata.in", "r");
    int N;
    fscanf (file, "%d", &N);
    pengguna login [100];
    for (int i = 0; i < N; i++){
        fscanf (file, "%[^#]#%[^\n]\n", login[i].nama, login[i].pass);
    }

    int tc;
    fscanf (file, "%d", &tc);
    char passcov [25];
    int flag = 0;
    for (int i = 0; i < tc; i++){
        fscanf (file, "%s\n", passcov);
        convert (passcov);
        for (int i = 0; i < N; i++){
            if (strcmp (passcov, login[i].pass) == 0){
                printf ("%s",login[i].nama);
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf ("Tidak Terdaftar\n");
        }   
    }
    
    
}