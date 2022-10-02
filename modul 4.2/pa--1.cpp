/*WAP to create simple calculator using class*/
#include<iostream>
using namespace std;
class calculator{
	private:
		int a,b;
		public:
			void data(){
				cout<<"Enter the value of two number:";
				cin>>a;
				cin>>b;
				
		               }
		    void sum()
			{
				cout<<"Summation of two numbers: "<<a+b<<"\n";
				
			}            
			void sub()
			{
				cout<<"Substraction  of two numbers: "<<a-b<<"\n";
				
			}            			  
		       void mul()
			{
				cout<<"multiplication of two numbers: "<<a*b<<"\n";
				
			}                 
	
	        void div()
			{
				cout<<"Division of two numbers: "<<(float)a/b<<"\n";
				
			}            
	
};
    int main()
    {
    	calculator aa;
    	aa.data();
    	aa.div();
    	aa.mul();
    	aa.sub();
    	aa.sum();
	}
