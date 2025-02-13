#include <stdio.h>
#include <string.h>

int main (){
    char binary[1000000];
    scanf ("%99s", binary);
    long long int num = 0, Q = 1;
    int l = strlen(binary);
    for (int i = l-1; i >= 0; i--){
       num += Q * (binary[i] - '0');
       Q *= 2;
    }

    int count = 0;
    while (num != 1){
        if (num % 2 == 1){
            num += 1; 
        } else {
            num /= 2;
        }
        count++;
    }

    printf ("%d\n", count);
    return 0;
}