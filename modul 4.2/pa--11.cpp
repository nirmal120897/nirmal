/*Write a program to find the max number from given two numbers using 
friend function*/



#include<iostream>
using namespace std;

class A{
	protected:
		int a,b;
		public:
		  void getvalue()
		  {
		  	cout<<"Enter tha value of a:";
		  	cin>>a;
		  	cout<<"Enter the value of b:";
		  	cin>>b;
			  }	
			  
	friend void max(A obj);		  
	
};
 void max(A obj)
 {
 	int max;
  max=obj.a>obj.b?obj.a:obj.b;
  cout<<"max number "<<max<<endl;
 }
 
 int main()
 {
 	A aa;
 	aa.getvalue();
 	max(aa);
 }
