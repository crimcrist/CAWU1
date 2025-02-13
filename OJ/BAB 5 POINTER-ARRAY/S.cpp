#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int result = 0;     
        int place = 1;      
    
        while (A > 0 || B > 0) {
            int a = A % 10; 
            int b = B % 10; 

            int sum = (a + b) % 10;
            result += sum * place; 

            A /= 10; 
            B /= 10; 
            place *= 10; 
        }

        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}