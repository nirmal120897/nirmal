//WAP to reverse a string and check that the string is palindrome or not//


#include<stdio.h>
 void main ()
 { int i;
    char str[]="mom";
    char Str[100];
    strcpy(Str,str);
    strrev(Str);
   if(strcmp(str,Str)==0){
   	printf("string is palindrome");
   }
   else{
   	printf("string is not palindrome");
   }
    
 }
