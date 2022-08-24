/*Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age*/


#include<stdio.h>
 struct detail
 {
 	int number;
 	char name[100];
 	int age;
 	char add[100];
 }s[4];
  
 void main(){
 	int i;
 	for(i=0;i<5;i++)
 	{
 		printf("Enter the number of employee:");
 		scanf("%d",&s[i].number);
 		printf("Enter the name of employee:");
 		scanf("%s",&s[i].name);
 		printf("Enter the age of employee:");
 		scanf("%d",&s[i].age);
 		printf("Enter the address of employee:");
 		scanf("%s",&s[i].add);
 			
	 }
 	printf("\ndetail of the employee");
 	
 	  for(i=0;i<5;i++)
 	  {
 	  	 printf("\nnumber of employee:%d",s[i].number);
 	  	 printf("\nname of employee:%s",s[i].name);
 	  	 printf("\nage of employee:%d",s[i].age);
 	  	 printf("\naddress of employee:%s",s[i].add);
	   }
 	 
 }
 
