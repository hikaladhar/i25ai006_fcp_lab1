//swap two variable using third variable9 
#include<stdio.h> 
int main() 
{ 
int a,b,temp; 
printf("\nEnter the values of a and b:"); 
scanf("%d%d",&a,&b); 
printf("\nValues of a and b before switching is a=%d and b=%d",a,b); 
temp=a; 
a=b; 
b=temp; 
printf("\nValues of a and b after switching is a=%d and b=%d",a,b); 
return 0; 
}