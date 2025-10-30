// WAP to count how many times program is executed.

#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\executionnumber.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    num++;
    ptr = fopen("C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\executionnumber.txt", "w");
    fprintf(ptr, "%d", num);
    fclose(ptr);
    printf("This is execution number: %d\n", num);
    return 0;
}
