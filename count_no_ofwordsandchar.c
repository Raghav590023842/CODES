//WAP to count the total number of words and characters in a file.

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int words=0, characters=0;
    fp = fopen("D:\\try.txt", "r");
    if (fp == NULL){
        printf("File not found!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF){
        characters++;
        if (ch == ' ' || ch == '\n' || ch == '\t'){
            words++;
        }
    }
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words+1);
    fclose(fp);
    return 0;
}
