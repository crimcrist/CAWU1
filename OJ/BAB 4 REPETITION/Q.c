#include <stdio.h>

int main(){
    long long int T, N, X; 
    long long int pembalikan_bawah=0, pembalikan_atas=0;
    scanf("%lld", &T);
    for (int i = 1; i <= T; i++){
        scanf("%lld %lld", &N, &X);
        pembalikan_bawah=(X/2);
        if(N%2==0){
          pembalikan_atas= ((N-X)+1)/2;
        }
        else{
            pembalikan_atas= (N-X)/2;
        }
        if(pembalikan_atas > pembalikan_bawah){
            printf("Case #%d: %lld\n", i, pembalikan_bawah);
        }
        else{
            printf("Case #%d: %lld\n", i, pembalikan_atas);
        }
    }
}