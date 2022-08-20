#include<stdio.h>
 int squre(int a);
  void main()
  {
  	int a;
  	printf("Enter the value of a: ");
  	scanf("%d",&a);
  	
  	squre(a);
  	printf("square of two no:%d",squre(a));
  }
  int squre(int a){
  	return(a*a);
  }
