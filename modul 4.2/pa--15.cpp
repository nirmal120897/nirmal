/*Write a program of to swap the two values using templates */


#include<iostream>
using namespace std;

 template <typename T>
   
   void swap(T a,T b)
   {
   	cout<<"before swaping value is :"<<a<<"\t"<<b<<endl;
   	T temp;
   temp=a;
   a=b;
   b=temp;
   	cout<<"after swaping value is :"<<a<<"\t"<<b<<endl;
   }
  int main()
  {
  	swap<int>(1,2);
  	swap<string>("a","s");
  	swap<double>(2.225,4.595);
  	
  }
