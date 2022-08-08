#include<stdio.h>
 void main()
  {
  	 int no=1532,sum=0,rem;
  	 while(no!=0)
  	   { rem=no%10;
  	     no=no/10;
  	   	 sum=sum+rem;
  	   	  
	   }
  	 printf("sum of all numbers=%d",sum);
  }
  
