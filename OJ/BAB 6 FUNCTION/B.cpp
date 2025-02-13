#include <stdio.h>


void cabang (int n[105],int N, int index, int total){
  int sum = 0;
  total += n[index];
  if (index * 2 <= N){
    cabang (n, N, index * 2, total);
    sum++;
  }

  if (index * 2 + 1 <= N){
    cabang (n, N ,index * 2 + 1, total);
    sum++;
  }

  if (sum == 0){
    printf ("%d\n", total);
  }
}

int main (){
  int tc;
  int N;
  scanf ("%d", &tc);
  for (int i = 1; i <= tc; i++){
    scanf ("%d", &N);
    int arr[100];
    for (int i = 1; i <= N; i++){
        scanf ("%d", &arr[i]);
    }
    printf ("Case #%d:\n", i);
    int index = 1,sum = 0;
    cabang (arr,N, index, sum);
  }
    
}