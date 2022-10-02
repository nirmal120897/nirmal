/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include<iostream>
using namespace std;

class A{
	
	public:
		
	A(double x,double y)
	{
		
		cout<<"the summation of two no is: "<<x+y<<endl;
		
	}
	A(double x,int y)
	{
		cout<<"the substraction of two no is: "<<x-y<<endl;
	}
		A(int x,double y)
	{
		cout<<"the multiplication  of two no is: "<<x-y<<endl;
	}
		A(int x,int y)
	{
		cout<<"the  Division of two no is: "<<x-y<<endl;
	}
	
};
 
  int main()
  {
  A a(2.2,2.5);
  A b(2.5,4);
  A c(6,6.9);
  A d(2,5);
  }
