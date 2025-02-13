#include<stdio.h>
#include<string.h>

int main(){
	FILE *input = fopen("testdata.in", "r");
	char string[105];
	long long posibility = 1;
	while(!feof(input)){
		fscanf(input, "%s\n", string);
		if(strcmp(string, "") == 0){
			break;
		}
		int l = strlen(string);
		int count = 0;
		if(string[0] == ';'){
			count++;
		}
		for(int i = 1; i < l; i++){
			if(string[i] == ';' && string[i-1] == ';'){
				count++;
			}
		}
		for(int i = 0; i < count; i++){
			posibility  *= 101;
			posibility  %= 1000000007;
		}
		strcpy(string, "");
	}
	printf("%lld\n", posibility);
}