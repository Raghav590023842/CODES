//WAP to count the number of spaces in a file.

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
    	 int count=0;
		 while((ch=fgetc(ptr))!=EOF)
		 {
		 	if(ch==' ')
		 	{
		 		count++;
			 }
		 }
		 printf("Total number of space is: %d", count);
	    }
    fclose(ptr);
    
    return 0;
}
