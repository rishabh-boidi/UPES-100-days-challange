//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
void main(){
char inp;
printf("your input:   ");
scanf("%c",&inp);
if(inp>='a' && inp<='z'){
    printf("lowercase alph");
}
else if(inp>='A' && inp<='Z'){
    printf("Uppercase alph");
}
else if(inp>='0' && inp<='9'){
    printf("number");
}
else{
    printf("special character");
}
}
//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter num1:  ");
    scanf("%d",&num1);
     printf("Enter num2:  ");
    scanf("%d",&num2);
     printf("Enter num3:  ");
    scanf("%d",&num3);
    if(num1>=num2 && num1>=num3){
        printf("num1 is greatest!");
    }
    else if(num2>=num1 && num2>=num3){
        printf("num2 is greatest");
       }
       else{
        printf("num3 id greatest");
       }
       }
       


