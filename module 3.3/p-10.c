
/*WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)*/

#include<stdio.h>
 void main()
 {
 	int a=10,b=13;
 	int c;
 	printf("Enter the process number:");
 	scanf("%d",&c);
 	switch(c)
	 {
	 	 case 1:
	 	 	printf("the addition of two number:%d",a+b);
	 	 	break;
	 	 	case 2:
	 	 		printf("The subtraction of two numbers:%d",a-b);
	 	 		break;
	 	 		case 3:
	 	 			printf("The multiplication of two numbers:%d",a*b);
	 	 			break;
	 	 			case 4:
	 	 				printf("The division of two numbers:%f",(float)a/b);
	 	 				break;
	 	 				default :
	 	 					printf("Wrong input entered");
	 }
 	
 }

  
