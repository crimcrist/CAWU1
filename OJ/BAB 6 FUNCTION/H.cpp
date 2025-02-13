#include <stdio.h>

void fibostring (int n, char a, char b){
    if (n == 0){
        printf ("%c", a);
    }else if (n == 1){
        printf ("%c", b);
    }else{
        fibostring(n - 1, a, b);
        fibostring(n - 2, a, b); 
}
}

int main (){
    int tc;
    int n;
    char a, b;
    scanf ("%d", &tc);
    for (int i = 0; i < tc; i++){
        scanf ("%d %c %c", &n, &a, &b);
        printf ("Case #%d: ", i+1);
        fibostring(n,a,b);
        printf ("\n");
    }
    
}