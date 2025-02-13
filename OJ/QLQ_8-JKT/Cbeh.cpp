#include <stdio.h>
#include <string.h>

int main(){
    FILE *file = fopen("testdata.in", "r");
    char data[105];
    int counter=1;
    while(!feof(file)){
        fscanf(file, "%s", data);
        int lenght = strlen(data);
        for (int i = 0; i < lenght; i++)
        {
            if(lenght == 1 && data[i] == ';'){
                counter *= 101;
            }
            else{
                if(data[i]==';' && data[i+1]==';'){
                    counter *= 101;
                    i+2;
                }
            }
        }
    }
    printf("%d\n", counter);
    return 0;
}