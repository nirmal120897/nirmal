#include<stdio.h>
 void main()
  {
  	 int a=0,b=1,c;
  	 printf("%d\t",a);
  	 printf("%d\t",b);
  	 c=a+b;
  	 printf("%d\t",c);
	 while(c<25)
	 {
	  a=b;
  	  b=c;
  	  c=a+b;
  	  printf("%d\t",c);
     }
   }
  	 
