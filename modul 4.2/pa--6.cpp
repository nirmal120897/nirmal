/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
  Rectangle: Area * breadth 
  Triangle: ½ *Area* breadth 
  Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;

void area(int x,int y)
{
	cout<<"The area of Rectangle is :"<<x*y<<endl;
	
}
void area(double x,double y)
{
	cout<<"The area of Triangle is :"<<0.5*x*y<<endl;
	
}
void area(double x)
{
	cout<<"The area of circle is :"<<3.14*x*x<<endl;
}

int main()
{
	area(5,6);
	area(2.3,2.6);
	area(22.5);
}
