/*Write a program to concatenate the two strings using Operator Overloading*/

#include<iostream>
#include<string.h>
using namespace std;
# define N 2

 class matrix{
 	char a[10];
 	public:
 		void accpvalue(){
 			cout<<"Enter the val:";
 			gets(a);
		 }
		 
		 void dispaly()
		 {
		 puts(a);
		 }
		 void operator+(matrix m){
		 	
		 	strcat(a,m.a);
		 	cout<<a;
		 	
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
 
 
 
 
 
 
 
 
 
 
