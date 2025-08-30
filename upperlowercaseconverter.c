#include<stdio.h>
int main()
{
	char x,c;
	printf("Enter a Character %c",x);
	scanf("%c",&x);
	c=x;
	if (x>='A' && x<='Z')
	{
	c=x+32;
	printf("The character is in Uppercase \n Character in lowercase is %c",c);
}
	else if (x>='a' && x<='z')
	{
	c=x-32;
	printf("The character is in Lowercase \n Character in Uppercase is %c",c);}
	
	return 0;
}
