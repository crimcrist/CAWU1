#include<stdio.h>

int main (){
    char nameMonth [15][20] =
    {"Jan", "Feb", "Mar", "Apr","Mei", "Jun","Juli", "Agu", "Sep", "Okt", "Nov", "Des"};
    int date, month, year;
    scanf ("%d/%d/%d",&date, &month, &year);
    printf ("%d %s %d",date, nameMonth[month -1], year);
}