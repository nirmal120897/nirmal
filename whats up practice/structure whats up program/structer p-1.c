#include<stdio.h>
 
  struct distance1
  {
  	int feet;
  	float inch;
  	
  }d[2];
 void main()
 {  int i;
      for(i=0;i<2;i++)
	  {

     printf("Enter the  distance\n");
    printf("Enter feet:");
    scanf("%d",&d[i].feet);
    printf("Enter inch:");
    scanf("%f",&d[i].inch);
    
    
 
 
	 
     }
        	printf("sum of the distance=%d'-%f",(d[0].feet+d[1].feet),(d[0].inch+d[1].inch));
 	
 }
