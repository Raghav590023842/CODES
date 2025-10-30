//WAP to count number of characters and words in a file.

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
    	 int word,chr;
		 while((ch=fgetc(ptr))!=EOF)
		 {
		 	chr++;
		 	if(ch==' ' || ch =='\n')
		 	{
		 		word++;
			 }
		 }
		 printf("Total number of character is: %d \n", chr);
		 printf("Total number of word is: %d", word+1); 
	    }
    fclose(ptr);
    
    return 0;
}
