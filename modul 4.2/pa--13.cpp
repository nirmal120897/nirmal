/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/


#include<iostream>
using namespace std;
# define N 2

 class matrix{
 	int a[10];
 	public:
 		void accpvalue(){
 			for(int i=0;i<N;i++)
 			{
 				cout<<"Enter the :";
 				cin>>a[i];
 				
			 }
		 }
		 
		 void dispaly()
		 {
		 	for(int i=0;i<N;i++)
		 	{
		 		cout<<a[i]<<"\t";
			 }
			 cout<<endl;
		 }
		 void operator+(matrix m){
		 	int temp[10];
		 	for(int i=0;i<N;i++)
		 	{
		 		temp[i]=a[i]+m.a[i];
		 		cout<<a[i]<<"+"<<m.a[i]<<endl;
		 		
			 }
			 for(int i=0;i<N;i++)
			 {
			 	cout<<"Sum:"<<temp[i]<<endl;
			 }
		 	
		 }
 };
 
 int main()
 {
 	matrix val1;
 	matrix val2;
 	val1.accpvalue();
 	val2.accpvalue();
 	val1.dispaly();
 	val2.dispaly();
 	val1+val2;
 }
 
 
 
 
 
 
 
 
 
 
