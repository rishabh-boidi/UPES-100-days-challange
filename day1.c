//Q1: Write a program to input two numbers and display their answer.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/


//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
void main(){
    int num1,num2;
    int sum,sub,mul,div;
    int operator;
    
printf("enter num1:  ");
scanf("%d",&num1);

printf("enter num2:  ");
scanf("%d",&num2);

sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1/num2; 
printf("the sum is %d\n",sum);
printf("the  answer is %d\n",sub);
printf("the product is %d\n",mul);
printf("the remainder is %d\n",div);
}