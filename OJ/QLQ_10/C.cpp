#include <stdio.h>
#include <string.h>

int flag = 0;

int main(){
	int N;
	char nama[10005][1005];
	scanf("%d", &N);
	getchar();
	
	for(int i = 0; i < N; i++){
		scanf("%[^\n]%*c", nama[i]);
	}
	
	char search[1005];
	scanf("%[^\n]%*c", search);
	for(int i = 0; i < N; i++){
		if(strcmp(search, nama[i]) == 0){
			flag = 1;
			break;
	}
}
	if(flag == 1){
		printf("Found\n");
	}else
		printf("Not Found\n");
	
	return 0;
}