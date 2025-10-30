//WAP to display the contents of a file line by line.

#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\30-10-25 codes\\questions.txt","r");
	if(ptr==NULL){
        printf("File does not exist.\n");
    }
    else{
    	char line[100];
        while (fgets(line, sizeof(line), ptr) != NULL) {
        printf("%s", line);
    }
        
    }
    fclose(ptr);
    return 0;
}
