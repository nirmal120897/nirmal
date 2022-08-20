#include<stdio.h>
 int print(int num)
 { 
 	if(num!=6){
 		return(num+print(num+1));
	 }
	 else{
	 	return 0;
	 }
 }
  
   void main(){
   	 int num;
   	printf("The summ of numbers from 1 to 5: %d",print(1));
   	 
   }
