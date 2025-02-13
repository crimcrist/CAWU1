#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    long long int arr[N];
    long long int total = 0;
    long long int Ganjil = 100001;  

    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
        total += arr[i];
        if (arr[i] % 2 != 0 && arr[i] < Ganjil) {
            Ganjil = arr[i];
        }
    }

    if (total % 2 == 0) {
        printf("%lld\n", total);
    } else {
        printf("%lld\n", total - Ganjil);
    }

    return 0;
}