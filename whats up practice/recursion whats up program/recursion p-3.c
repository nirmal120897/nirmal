#include<stdio.h>

 int digit(int num)
  
   {  
     
   if(num!=0){ 
            
   return (1+digit(num/10));
   	 
           }
          
   else {
   	 return 0;
   }
}
 void main()
  {
  	int num=1234;
  	
  	
  	printf("%d",digit(num));
  }
