#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("enter two numbers: ");
scanf("%f%f",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping a is: %f\n",a);
printf("after swapping b is: %f",b);
getch();
}