//program of finding area of circle,triangle,rectangle

#include<stdio.h>
 void main()
{
		float pi=3.14,r,l,b1,h,b2;
  	printf("enter the value of r:\n");
  	scanf("%f",&r);
  	printf("area of circle=%f\n",pi*r*r);
  	printf("enter the value of l\n" "enter the value of b1\n");
  	scanf("%f",&l);
  	scanf("%f",&b1);
  	printf("area of the rectangle=%f\n",l*b1);
  	printf("enter the value of h\n" "enter the value of b2\n");
  	scanf("%f",&h);
  	scanf("%f",&b2);
  	printf("area of the triangle=%f\n",(h*b2)/2);
  	
}
  
