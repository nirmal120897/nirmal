#include<stdio.h>
int swap();
 void main()
  {
  	int a,b;
  	swap();
  	
  	
  	
  }
 int swap()
 {
 	int a=2,b=4;
 	a=b+a;
 	b=-b+a;
 	a=a-b;
 	
 	printf("after swaping a:%d,b:%d",a,b);

 	
 }
