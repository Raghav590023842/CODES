//WAP to open a file and check whether the file is empty or contain some text.

#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\30-10-25 codes\\questions.txt","r");
	if(ptr==NULL){
        printf("File does not exist.\n");
    }
    else{
        char ch = fgetc(ptr);
        if(ch == EOF){
            printf("File is empty.\n");
        }
        else{
            printf("File contains some data.\n");
        }
        
    }
    fclose(ptr);
    return 0;
}

