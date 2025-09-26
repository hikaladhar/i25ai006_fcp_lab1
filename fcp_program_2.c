//program to calculate total and percentage obtained
#include<stdio.h> 
int main() 
{ 
int m1,m2,m3,m4,m5,total; 
float percentage; 
printf("\nEnter marks in Mathematics:"); 
scanf("%d",&m1); 
printf("\nEnter marks in Physics:"); 
scanf("%d",&m2); 
printf("\nEnter marks in Chemistry:"); 
scanf("%d",&m3); 
printf("\nEnter marks in English:"); 
scanf("%d",&m4); 
printf("\nEnter marks in Computer Science:"); 
scanf("%d",&m5); 
total=m1+m2+m3+m4+m5; 
percentage=(total*100)/500; 
printf("\nThe total marks obtained out of 500 is %d",total); 
printf("\nTotal percentage obtained is %0.2f",percentage); 
return 0;
}