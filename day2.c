//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
void main(){
int length,breadth,area,perimeter;
printf("Enter length:  ");
scanf("%d",&length);
printf("Enter breadth:  ");
scanf("%d",&breadth);
perimeter=2*(length+breadth);
area=length*breadth;
printf("the area is %d",area);
printf("the perimeter is %d",perimeter);

}
//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
void main(){
int area,circumference,radius,pi;
printf("Enter radius:  ");
scanf("%d",&radius);
pi=3.14;
circumference=2*pi*radius;
area=pi*pow(radius,2);
printf("the area is %d",area);
printf("the circumfrence is %d",circumference);

}

