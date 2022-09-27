//wap to find the area of circle..
#include<stdio.h>
#include<conio.h>
#define PI 3.14
 void main()
{
  float radius,area;
  clrscr();
  printf("enter the radius of circle\n");
  scanf("%f",&radius);
  area=PI*radius*radius;
  printf("area of circle:%0.4f\n",area);
  getch();

}