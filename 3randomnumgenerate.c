// WAP to generate 3 random numbers from 1 to 9 and if all 3 same display "first prize",
// if any 2 same display "second prize" and if none same display "try again".

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2,n3;
    n1 = rand() % 9+1;
    n2 = rand() % 9+1;
    n3 = rand() % 9+1;
    printf("%d %d %d \n",n1,n2,n3);
    if (n1 == n2 && n2 == n3)
        printf("First prize");
    else if (n1 == n2 || n2 == n3 || n1 == n3)
        printf("Second prize");
    else
        printf("Try again");
    return 0;
}
