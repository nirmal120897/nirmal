//write a program to find out the factorial of number using recursion//

#include<stdio.h>
int fact(int a);
 void main()
 {int a=6;
  
  printf("Factorial of the given no:%d",fact(6));
 	
 }
  int fact(int a)
  {
  	if(a!=1){
  		return (a*fact(a-1));
	  }
  }
