//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    if (n%2==0)
        printf("The given integer is even.");
    else
        printf("The given integer is odd.");
}


//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
void main(){
int num;
printf("enter num:  ");
scanf("%d",&num);
if(num>0){
    printf("number is positive");
}
else if(num==0){
    printf("number is zero");
}
else{
    printf("number is negative");
}
}