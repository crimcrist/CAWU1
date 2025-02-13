#include <stdio.h>
#define jt 1000000

int main (){
    long long int pajak = 0;
    long long int perhasilan;
    long long totalgaji;
    scanf ("%lld", &perhasilan);
    if (perhasilan <= 60*jt){
        pajak += perhasilan*0.05;
    } 
    else 
    else if (perhasilan > 60*jt && perhasilan <= 250*jt)
    {
     pajak += (perhasilan - 60*jt) *0.15;
    }
    else if (perhasilan > 250*jt && perhasilan <= 500*jt )
    {
    pajak += (perhasilan - 250*jt) *0.25;
    }
    else if (perhasilan > 500*jt && perhasilan <= 5000*jt)
    {
     pajak += (perhasilan - 500*jt) * 0.30;
    }
     else if (perhasilan > 5000*jt)
    {
     pajak += (perhasilan - 5000*jt) * 0.35;
    }
printf ("Pajak : %lld\n", pajak);
}