//WAP to find total number of lines in a file.

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int lines=0;
    fp=fopen("D://try.txt","r");
    if(fp==NULL){
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n'){
            lines++;
        }
    }
    printf("Total number of lines in file: %d",lines+1);
    fclose(fp);
    return 0;
}
