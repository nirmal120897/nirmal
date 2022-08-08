#include<stdio.h>
 void main()
  {
  	 int col,row,i,j;
  	 
  	  for(row=1;row<=6;row++)
  	   { 
  	      for(col=1;col<=row;col++)
  	        {
  	        	printf("*");
  	        }
  	        printf("\n");
	   }
			 for(i=5;i>=1;i--)
			   {
			   	 for(j=1;j<=i;j++)
			   	 {
			   	 	printf("*");
			   	 	
				 }	   
			  printf("\n");
		       }
  }

