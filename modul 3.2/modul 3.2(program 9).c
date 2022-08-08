#include<stdio.h>
 void main()
  {
  	 int max=0,no=1562,rem;
  	 while(no!=0){
  	 	rem=no%10;
  	 	no=no/10;
  	 	if(max<rem){ max=rem;
		   }
	   }
	   printf("%d",max);
  }
  
