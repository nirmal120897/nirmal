#include<stdio.h>
 int print(int num)
 { 
 	if(num!=51){
 		printf("%d\t",num);
 		print(num+1);
	 }
	 else{
	 	return 0;
	 }
 }
  
   void main(){
   	 int num=0;
   	 print(1);
   	 
   }
