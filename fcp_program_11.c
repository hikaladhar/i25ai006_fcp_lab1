//conversion of total seconds to time
#include<stdio.h> 
int main(){ 
int total_seconds,hours,minutes,seconds; 
printf("\nEnter the total seconds:"); 
scanf("%ld",&total_seconds); 
hours=total_seconds/3600; 
total_seconds%=3600; 
minutes=total_seconds/60; 
seconds=total_seconds%60; 
printf("\nTime is %02d:%02d:%02d",hours,minutes,seconds); 
return 0;
}