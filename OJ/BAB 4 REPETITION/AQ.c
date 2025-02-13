#include <stdio.h>
#include <string.h>

int main (){
    int T;
    char S [100];
    scanf ("%d", &T);
    for (int tc = 0; tc < T; tc++){
        scanf ("%s", S);
        int count = 0; // count titik
        int l = strlen (S);
        int flag = 0;
        for (int i = 0; i < l; i++){
            if (S[i] == '.'){
                count++;
                if (i < l - 1 && S[i+1] == '.'){
                    flag = 1;
                }  
            }
        }
        if (S[0] == '.' || S [l - 1] == '.'){
            flag = 1;
        }
        if (flag == 0 && count == 5){
            printf ("Case #%d: YES\n", tc + 1);
        } else {
            printf ("Case #%d: NO\n", tc + 1);
        }
    }
    

    return 0;
}