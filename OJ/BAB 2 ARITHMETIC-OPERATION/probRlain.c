#include <stdio.h>

int main (){
    double A,B,C,D;
    for (int i = 0; i < 3 ; i++)
    {
        scanf ("(%lf+%lf)x(%lf-%lf)",&A,&B,&C,&D);getchar();
        printf ("%.0lf ",(A+B)*(C-D));
    }
    
    return 0;
}