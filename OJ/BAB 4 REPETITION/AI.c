#include <stdio.h>

int main (){
    int N, A;
    scanf ("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf ("%d", &A);  
        int sum [A];
        int total_sum = 0;
        for (int j = 0; j < A; j++){
            scanf ("%d", &sum[j]);
            total_sum += sum[j];
        }

        if (total_sum % 2 != 0){
            printf ("Case #%d: No\n", i+1);
            continue;
            }

        int left = 0;
        int possible = 0;
        int righ = total_sum/2;

        for (int i = 0; i < A; i++){
            left += sum[i];
            if (left == righ){
                possible = 1;
                break;
            }
        }

        if (possible)
        {
            printf ("Case #%d: Yes\n", i+1);
        } else {
           printf ("Case #%d: No\n", i+1);
        }
    }   
}