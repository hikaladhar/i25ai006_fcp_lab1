//program to calculate area of triangle
#include<stdio.h> 
int main() 
{ 
float base,height,area; 
printf("\nEnter the base length of the triangle:"); 
scanf("%f",&base); 
printf("\nEnter the height of the triangle:"); 
scanf("%f",&height); 
area=0.5*base*height; 
printf("\nThe area of triangle is %.2f",area); 
return 0; 
} 
