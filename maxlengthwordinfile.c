//WAP to find word with maximum length in a file.

#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char ch, word[100], longest[100];
    int maxlength=0;
    
    fp=fopen("D://try.txt","r");
    if(fp==NULL){
        printf("File not found");
        return 0;
    }
    
    while (fscanf(fp, "%s", word) != EOF) {
        int len = strlen(word);
        if (len > maxlength) {
            maxlength = len;
            strcpy(longest, word);
        }
    }
    
    fclose(fp);
    if (maxlength == 0)
        printf("File is empty.\n");
    else
        printf("Longest word: %s\nLength: %d\n", longest, maxlength);
    return 0;
}