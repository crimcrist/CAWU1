#include <stdio.h>

int main (){
    int T, Ut,Ua;
    scanf("%d %d %d", &T, &Ut, &Ua);
    double rata = (T*0.2 + Ut*0.3 + Ua*0.5);
    printf("%.2lf\n", rata);
    return 0;
}