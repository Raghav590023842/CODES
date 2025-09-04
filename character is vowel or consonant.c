//WAP to check whether a given character is vowel or consonant.

#include<stdio.h>
int main()
{
	char x;
	printf("Enter a Single Character %c",x);
	scanf("%c",&x);
	
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
	printf("Vowel");
	else
	printf("consonant");
	
	return 0;
}
