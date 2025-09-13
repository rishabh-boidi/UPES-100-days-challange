//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
void main(){
int Celsius,Fahrenheit;
printf("enter temp in celsius:  ");
scanf("%d",&Celsius);
Fahrenheit= (Celsius*9/5)+32;
printf("temp in Farhenheit %d",Fahrenheit);
}
//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
void main(){
int num1,num2,a;
printf("enter num1:  ");
scanf("%d",&num1);

printf("enter num2:  ");
scanf("%d",&num2);

a=num1;
num1=num2;
num2=a;  
printf("%d,%d",num1,num2);
}