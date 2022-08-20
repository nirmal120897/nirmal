/*WAP to show 
2. Vowel or Consonant using switch case */


#include<stdio.h>
 void main()
 {
 	char a ;
 	printf("Enter the value of a: ");
 	scanf("%c",&a);
 	if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
	 
 	switch (a)
	{
	case 'a':
 			case 'i':
 				case 'o':
 					case 'e':
 						case 'u':
 							case 'A':
 								case 'I':
 									case 'O':
 										case 'U':
 											case 'E':
 												
 							printf("\nThe article is vowel");
 							break;
 							
 							default :
 								printf("\nThe article is consonant");
								 }
		
	}
	else {
		printf("The input is envalid");
	}
 }