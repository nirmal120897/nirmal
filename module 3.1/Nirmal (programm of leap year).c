//programm for checking year is leap year or not 

#include<stdio.h>
 void main()
 {
  int A,B;
   printf("Enter the value  of A year:\n");
   scanf("%d",&A);
   printf("Enter the value of B year :\n");
   scanf("%d",&B);	
   if(A%4==0?printf("A is a leap year\n"):printf("A is not a leap year\n"));
   if(B%4==0?printf("B is a leap year\n"):printf("B is not a leap year\n"));
 }
