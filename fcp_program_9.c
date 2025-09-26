//hours,minutes,seconds into total seconds
#include<stdio.h> 
int main() 
{ 
long total_seconds; 
int hours,minutes,seconds; 
printf("\nEnter the no of hours:"); 
scanf("%d",&hours); 
printf("\nEnter the no of minutes:"); 
scanf("%d",&minutes); 
printf("\nEnter the no of seconds:"); 
scanf("%d",&seconds); 
total_seconds=(hours*3600)+(minutes*60)+seconds; 
printf("\nThe total seconds is equal to %ld",total_seconds); 
return 0; 
}