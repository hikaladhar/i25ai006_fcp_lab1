//total seconds in days,hours,minutes and seconds
#include<stdio.h> 
int main() 
{ 
long total_seconds; 
int days,minutes,hours,seconds; 
printf("\nEnter the total seconds:"); 
scanf("%ld",&total_seconds);  
days=total_seconds/(24*3600); 
total_seconds%=(24*3600); 
hours=total_seconds/3600; 
total_seconds%=3600; 
minutes=total_seconds/60; 
total_seconds%=60; 
seconds=total_seconds; 
printf("\n days:%d hours:%d minutes:%d seconds:%d",days,hours,minutes,seconds); 
return 0; 
} 