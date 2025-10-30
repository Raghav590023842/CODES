//WAP to find the longest word in a file.

#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	ptr=fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\30-10-25 codes\\questions.txt","r");
	if(ptr==NULL){
        printf("File does not exist.\n");
    }
    else{
    	char word[100],max[100];
    	int len,mlen=0;
    	char line[100];
    	while (fgets(line, sizeof(line), ptr) != NULL) {
    	int i=0,j=0,k=0;
    	while(line[i]!='\0')
    	{
    		if(line[i]!=' ' && line[i]!='\n')
    		{
			word[j]=line[i];
    		j++;}
    		else{
    			word[j]='\0';
    			len=strlen(word);
		        if(len>mlen)
		        {
		        	mlen=len;
		        	for(k=0;k<=j;k++)
		        	{
		        		max[k]=word[k];
					}
				}
				j=0;
    			
			}
			i++;
		}
    	
}
printf("Longest word is: %s", max);
}
	
	fclose(ptr);
	return 0;
}
