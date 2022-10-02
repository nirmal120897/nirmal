/*Write a program to swap the two numbers using friend function without 
using third variable*/

#include<iostream>
using namespace std;

class A{
	private:
		int a,b,temp=0;
		public:
		void value()
			{
				cout<<"Enter the value 1: ";
				cin>>a;
				cout<<"Enter the value 2: ";
				cin>>b;
				cout<<"the values before swaping :"<<a<<"\t"<<b;
			}
	 friend void swap(A obj);
};

void swap(A obj)
 {
  obj.a=obj.temp;
  obj.b=obj.a;
  obj.temp=obj.b;
  
   cout<<"the value after swaping :"<<obj.a<<"\t"<<obj.b;
 	
 	
 }
  int main()
  {
  	A aa;
  	aa.value();
  	swap(aa);
  	
  	
  }
