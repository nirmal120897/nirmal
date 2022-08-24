/*WAP to make addition, Subtraction and multiplication of two matrix using 
     2-D Array*/


#include<stdio.h>
 void main()
  { int i,j;
  	 int a[2][2]={{2,3},{3,4}};
  	 int b[2][2]={{2,5},{6,7}};
  	 int c[2][2];
  	 printf("addition of two matrix:\n");
  	  for(i=0;i<2;i++)
  	  {
  	  	for(j=0;j<2;j++)
  	  	{
  	  		c[i][j]=a[i][j]+b[i][j];
  	  		printf("%d\t",c[i][j]);
  	  		
			}
			printf("\n");
		}
		 printf("substraction  of two matrix:\n");
  	  for(i=0;i<2;i++)
  	  {
  	  	for(j=0;j<2;j++)
  	  	{
  	  		c[i][j]=a[i][j]-b[i][j];
  	  		printf("%d\t",c[i][j]);
  	  		
			}
			printf("\n");
		}
		
		 int sum=0,k;
  	 printf("The multiplication of two matrix:");
  	 for(i=0;i<2;i++)
  	 { printf("\n");
  	 	for(j=0;j<2;j++)
  	 	{ 
  	 		sum=0;
  	 		for(k=0;k<2;k++)
  	 		{
  	 			sum=sum+(a[i][k]*b[k][j]);
  	 	    }
						  c[i][j]=sum;
  	 				    printf("%d\t",c[i][j]);
			    
			
		   }
	   }		
  }
