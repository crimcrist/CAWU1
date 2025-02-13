#include <stdio.h>

int main (){
int t, n, arr[105];
scanf ("%d", &t);
for (int tc = 0; tc < t; tc++){
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
    scanf ("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            int result = arr[i] ^ arr[j];
            int a = 0;
            while (result > 0){
                if (result % 2 == 1){
                    a++;
                }
                result >>= 1; // result /= 2;
            }
            if (a >= 3){
                count++;
            }
            
        }
    }
    printf ("Case #%d: %d %d\n", tc+1, count, n * (n-1) / 2 - count);
}

return 0;
}