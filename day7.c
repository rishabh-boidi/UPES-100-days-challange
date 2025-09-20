//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
void main(){
int year;
printf("enter year:  ");
scanf("%d",&year);
if(year % 4==0){
    printf("%d is a leap year",year);
}
else{
    printf("not a leap year");
}
}

//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
void main(){
char letter;
printf("enter a letter:  ");
scanf("%c",&letter);
if(letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u'){
    printf("input is a vowel");
}
else{
    printf("input is a consonant");
}
}