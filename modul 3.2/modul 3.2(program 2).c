#include<stdio.h>
 void main()
  {
  	 int no=1562,rem,max=0;
  	 while(no!=0){
  	 	rem=no%10;
  	 	no=no/10;
  	 	
  	 	if(max<rem){ 
  	 	max=rem;}
		
	   }
 	printf("max no =%d",max);
  }
