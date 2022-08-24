//write a program to find out the lenght of string without using function//

#include<stdio.h>
 void main()
 {
 	 int i,sum=0;
 	 char str[]="hello world";
 	 for(i=0;str[i]!='\0';i++)
 	 {
 	 	if(str[i]!='\0'){
 	 		sum=sum+1;
		  }
	  }printf("lenght of the array:%d",sum);
 }
