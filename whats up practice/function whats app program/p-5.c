#include<stdio.h>
 int sum(int n);
 void main(){
 	int n;
 	printf("Enter the value of n :");
 	scanf("%d",&n);	
 	sum(n);
 }
  int sum(int n){
  	int i,fact=1,sum=0;
  	for(i=1;i<n;i++)
 	 {
 	 	fact=fact*i;
 	 	sum=sum+((fact)/i);
	  }
  	printf("The sum of the series is :%d",sum);
  	
  }
 
