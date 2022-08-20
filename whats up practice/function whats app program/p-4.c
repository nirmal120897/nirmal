#include<stdio.h>
  int even_odd(int a);
  void main()
   {
   	 int a;int b=90;
   	 printf("Enter the value of number: ");
   	 scanf("%d",&a);
   	 even_odd(a);
   	
   }
  int even_odd(int a){ 
    if(a%2==0){
    	printf("The number is even number");
	} 
	else{
		 printf("The numbr is odd number ");
	}	
  		
  }
