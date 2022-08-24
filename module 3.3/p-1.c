//find out the max value of array using function//

#include<stdio.h>
 int max();
  void main()
  {
  	 int a[7]={1,3,6,2,15,4,16};
  	 max(a[7]);
  }
  int max()
   {
   	 int i,j,max=0;
   	 int a[7]={1,3,6,2,15,4,16};
   	  for(i=0;i<7;i++)
	 {
	     	for(j=i+1;j<7;j++)
	 	    {
	 		    if(a[i]<a[j]){ max=a[j];
	 		     a[i]=max;
				
				 }
				
	 
        	}
	 	
		 }
		 
	   printf("%d",max);
	 
   }
