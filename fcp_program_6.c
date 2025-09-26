//swap two variables without using third variable
#include<stdio.h> 
int main() 
{ 
int a,b; 
printf("\nEnter the values for a:"); 
scanf("%d",&a); 
printf("\nEnter the values for b:"); 
scanf("%d",&b); 
printf("\nValues of a and b before swapping is %d and %d",a,b); 
a=a+b; 
b=a-b; 
a=a-b; 
printf("\nValues of a and b after swapping is %d and %d",a,b); 
return 0; 
}