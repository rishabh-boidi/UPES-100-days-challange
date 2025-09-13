//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
void main(){
int num1,num2,swap;
printf("enter num1:  ");
scanf("%d",&num1);

printf("enter num2:  ");
scanf("%d",&num2);

printf("%d, %d",num2,num1);
}

//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
void main(){
    int n,sum;
    printf("enter number: ");
    scanf("%d",&n);
    sum= n*(n+1)/2;
    printf("%d",sum);
}