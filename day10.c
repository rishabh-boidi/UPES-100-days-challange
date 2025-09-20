//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
void main(){
    int num1,num2,num3;
    printf("enter 3 values:    ");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    if(num1== num2 && num2==num3 ){
        printf("Equilateral");
    }
    else if(num1==num2 || num2==num3 || num3==num1){
    printf("Isoceles");
    }
    else{
        printf("scalene");
    }
}
//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
void main(){
    int inp;
    printf("Input:  ");
    scanf("%d",&inp);
    switch(inp){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("Tuesday");
         break;
        case 3:
        printf("Wednesday");
         break;
        case 4:
        printf("Thursday");
         break;
        case 5:
        printf("friday");
         break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("invalid input");
    }
}