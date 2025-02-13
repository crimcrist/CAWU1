#include <stdio.h>

int main (){
    int hh ;
    int mm ;
    int ss ;
    char tt [10] ;
        scanf ("%02d:%02d:%02d%s",&hh, &mm, &ss, &tt);
        if (tt == "PM" && hh != 12){
            hh += 12;
        } else if (tt == "AM" && hh == 12){
            hh -= 12;
        }
        printf ("%02d:%02d:%02d\n", hh, mm, ss);
}
