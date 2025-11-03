//WAP to open a file and read its contents.

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;

    fp = fopen("D:\\try.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}