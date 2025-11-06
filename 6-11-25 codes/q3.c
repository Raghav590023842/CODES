//WAP to show the use of dynamic memory allocation and implement calloc or malloc function.

#include<stdio.h>
#include<stlib.h>
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
        printf("%d ", marks[i]);
    }

    free(marks);
    
	return 0;
}
