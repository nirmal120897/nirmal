/*Write a program to find the multiplication values and the cubic values using 
inline function*/


#include<iostream>
#include<cmath>
using namespace std;

class A{
	public:	
	inline void multi(int a,int b,int c,int d)
	{
		cout<<a*b*c*d;
		
			}		
};

int main()
{
	A obj;
	cout<<"the maltiplication of the valures :";
	obj.multi(2,3,4,5);
	cout<<endl<<"The cubic value is :";
	obj.multi(2,2,2,1);
}
