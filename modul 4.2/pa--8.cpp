/*Write a program to swap the two numbers using friend function without 
using third variable*/

#include<iostream>
using namespace std;
class A{
	protected:
	int a,b;
	public:
		void value()
		{
			cout<<"Enter the value of a:";
			cin>>a;
			cout<<"Enter the value of b:";
			cin>>b;
			cout<<"the two numbers are:"<<a<<"\t"<<b;
		}
	
	 friend void swap(A obj);
};

   void swap(A obj)
  { 
  	obj.a=obj.a*obj.b;
  	obj.b=obj.a/obj.b;
  	obj.a=obj.a/obj.b;
  	cout<<"the two numbers value after swaping is:"<<obj.a<<"\t"<<obj.b;
  }
  int main()
  {
  	A aa;
  	aa.value();
  	swap(aa);
  	
}
