#include<stdio.h>
 void main()
  {
  	  int a,n,evenno=0,oddno=0;
  	  printf("Enter the value of n=");
  	  scanf("%d",&n);
  	
  	  for(a=1;a<=n;a++)
  	  {
		if(a%2==0){
		         evenno=evenno+1;
		         }
	    else if(a%2!=0){ oddno=oddno+1;
	            	}
		          
		
  }
  	  printf(" total evenno=%d\n",evenno);
  	   printf(" total oddno=%d\n",oddno);
  	   printf("Summation of even and odd no=%d\n",evenno+oddno);
  }
