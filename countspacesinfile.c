//WAP to count the number of spaces in a file.

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int space=0;
    fp=fopen("D://try.txt","r");
    if(fp==NULL){
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch==' '){
            space++;
        }
    }
    printf("Total number of spaces in file: %d",space);
    fclose(fp);
    return 0;
}
