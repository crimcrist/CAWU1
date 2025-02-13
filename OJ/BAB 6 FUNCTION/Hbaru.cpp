#include <stdio.h>

void fibostring(int n, char a, char b, char result[]) {
    if (n == 0) {
        result[0] = a;
        result[1] = '\0'; 
    } else if (n == 1) {
        result[0] = b;
        result[1] = '\0'; 
    } else {
        char res1[100], res2[100];
        fibostring(n - 1, a, b, res1);
        fibostring(n - 2, a, b, res2); 

        int j = 0;

        while (res1[j] != '\0') { 
            result[j] = res1[j];
            j++;
        }

        int k = 0;
        while (res2[k] != '\0') { 
            result[j++] = res2[k++];
        }
        result[j] = '\0'; 
    }
}

int main() {
    int tc; 
    scanf("%d", &tc);
    
    for (int i = 0; i < tc; i++) {
        int n;
        char a, b;
        scanf("%d %c %c", &n, &a, &b);

        char result[100]; 
        printf("Case #%d: ", i + 1);
        fibostring(n, a, b, result);
        printf("%s\n", result);
    }

    return 0;
}
