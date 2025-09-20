#include <stdio.h>
#include <math.h>
void main(){
int p,r,t,si,ci,timescompounded,amount;
printf("enter the principal:");
scanf("%d",&p);

printf("enter the rate: ");
scanf("%d",&r);

printf("Enter the no of years:");
scanf("%d",&t);
printf("enter times compounded per year: ");
scanf("%d",&timescompounded);
si=p*r*t/100;
printf("si is %d\n",si);

amount = p* pow(1+(r/100)/timescompounded,timescompounded*t);
ci = amount - p;
printf("ci is %d",ci);

}

//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
void main(){{
    int s;
    printf("Enter time in seconds: ");
    scanf("%d", &s);
    int m,h;
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    printf("\nThe given time in hours, minutes and seconds format is %d:%d:%d.", h,m,s);    
}







