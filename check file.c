//Wap to open a file if exist and check whether it is empty or not.

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("D:\\try.txt", "r");

    if(fp==NULL){
        printf("File does not exist.\n");
    }
    else{
        char ch = fgetc(fp);
        if(ch == EOF){
            printf("File is empty.\n");
        }
        else{
            printf("File is not empty.\n");
        }
        
    }
    fclose(fp);
    return 0;
}
