//WAP to accept two values from a user and pass these values to a function to compute the sum of these numbers.
//Return the sum and evaluate whether the return number is even or odd using another function.

#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

void number(int num) {
    if (num % 2 == 0)
        printf("The sum %d is Even.\n", num);
    else
        printf("The sum %d is Odd.\n", num);
}

int main()
{
	int x,y,result=0;
	printf("Enter a value:");
	scanf("%d",&x);
	printf("Enter another value:");
	scanf("%d",&y);
	
    result=sum(x, y);
    number(result);

    return 0;
}
