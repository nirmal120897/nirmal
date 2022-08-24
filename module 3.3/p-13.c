/*WAP to show difference between Structure and Union.*/

/*  structure: structure is a data type which groups the different type of data into similar type
    union: A special data type available in c that allows to store different data types in the same memory location */

#include<stdio.h>
 struct student
 { int rollno;
   char name[100];
   int age;
   char add[100];
 	
 }s[0];
 
 union student1
 {
 	int rollno;
 	char name[100];
 	int age;
 	char add[100];
 }u[0];
 
 void main()
 {  printf("Detail of student for structure:\n");
 	printf("Enter the rollno of student:");
 	scanf("%d",&s[0].rollno);
 	printf("Enter the name of student:");
 	scanf("%s",&s[0].name);
 	printf("Enter the age of student:");
 	scanf("%d",&s[0].age);
 	printf("Enter the address of student:");
 	scanf("%s",&s[0].add);
 	
 	printf("Detail of student for union\n");
 	printf("Enter the rollno of student:");
 	scanf("%d",&u[0].rollno);
 	printf("Enter the name of student:");
 	scanf("%s",&u[0].name);
 	printf("Enter the age of student:");
 	scanf("%d",&u[0].age);
 	printf("Enter the address of student:");
 	scanf("%s",&u[0].add);
 	
 	printf("Location of structure\n");
 	printf("%d\n",&s[0].rollno);
 	printf("%d\n",&s[0].name);
 	printf("%d\n",&s[0].age);
 	printf("%d\n",&s[0].add);
 	
 	printf("Location of union\n");
 	printf("%d\n",&u[0].rollno);
 	printf("%d\n",&u[0].name);
 	printf("%d\n",&u[0].age);
 	printf("%d\n",&u[0].add);
 		
 }
