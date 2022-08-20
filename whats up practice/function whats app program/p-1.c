#include<stdio.h>
int multi(int a,int b);
  void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    multi(a,b);
    printf("multiplication of two number:%d",multi(a,b));  
}
 int multi(int a,int b){
    
   return(a*b);
 }
 
 
