#include<stdio.h>
 struct time
 {
 	int hours;
 	int minutes;
 	int secounds;
 	
 	
 }s[1];

 void main()
 {
 	 int i;
 	 for(i=0;i<2;i++)
 	 {
 	 	printf("Enter start time:");
 	 	scanf("%d" "%d" "%d",&s[i].hours,&s[i].minutes,&s[i].secounds);
 	   
 	 	
	  }
	  printf("Time difference :%d:%d:%d-%d:%d:%d",s[0].hours,s[0].minutes,s[0].secounds,s[1].hours,s[1].minutes,s[1].secounds);
 }
