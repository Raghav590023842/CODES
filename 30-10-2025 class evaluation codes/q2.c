//WAP to read the contents of a file and display them in proper format.

#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\30-10-25 codes\\questions.txt","r");
	if(ptr==NULL){
        printf("File does not exist.\n");
    }
    else{
        char ch;
        while((ch = fgetc(ptr)) != EOF)
        	{
        		printf("%c", ch);
			}
        
    }
    fclose(ptr);
    return 0;
}

