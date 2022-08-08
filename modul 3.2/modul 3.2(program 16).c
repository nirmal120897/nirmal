#include<stdio.h>
 void main()
  {
  	 int col,row,space=4,a;
  	 
  	  for(row=1;row<=5;row++)
  	   { 
  	      for(col=1;col<=space;col++)
  	        {
  	        	printf(" ");
  	         
			  }
			  space--;
			 for(a=1;a<=2*row-1;a++)
			   {
			   	printf("*");
			   }
			 printf("\n");
			  
		 }
  }

