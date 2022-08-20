#include<stdio.h>

 struct complex
 {
 	 float real;
 	 float image;
 	
 }d[2];


 void main()
 { int i;
 	 for(i=0;i<2;i++)
 	 {
 	 	printf("Enter the real and imaginary:");
 	 	printf("\nreal number:");
 	 	scanf("%f",&d[i].real);
 	 	printf("\nimaginary number:");
 	 	scanf("%f",&d[i].image);
 	 	
	  }
	  printf("sum=%f+%fi",(d[0].real+d[1].real),+(d[0].image+d[1].image));
 	 
 	 
 }
