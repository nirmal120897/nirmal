#include<stdio.h>
 void main()
  {
  	 int col,row;
  	  for(row=1;row<=5;row++)
  	   { 
  	      for(col=1;col<=row;col++)
  	        {
  	        	if(col==1||col==3||col==5){printf("1");
				  } 
  	        	 else{printf("0");
				   }
  	        	 
			  }
			  printf("\n");
		 }
  }

