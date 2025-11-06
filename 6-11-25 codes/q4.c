//WAP to show the use of realloc and free.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter no of students:");
	scanf("%d",&n);
	
	int *marks;
	marks=(int*) malloc(n * sizeof(int));
	int i;
	for(i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks entered are:\n");
    for(i = 0; i < n; i++) {
    	printf("marks of student %d: ", i + 1);
        printf("%d \n", marks[i]);
    }
    char choice;
	printf("\nDo u want to add more students?: (y/n) \n");
	scanf(" %c", &choice);
	int n1;
	if (choice=='y'||choice=='Y'){
		printf("enter no of students:\n");
		scanf("%d",&n1);
		int t=n+n1;
		marks = (int*) realloc(marks, t * sizeof(int));
		
		for(i = n; i < t; i++) {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        
    }
     
    printf("\nFinal Marks entered are:\n");
    for(i = 0; i < t; i++) {
    	printf("marks of student %d: ", i + 1);
        printf("%d \n", marks[i]);
    }
	}
	
    free(marks);
    
	return 0;
}
