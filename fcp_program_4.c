//conversion of temperature
#include<stdio.h> 
int main() 
{ 
float fahrenheit,celsius; 
printf("\nEnter the temperature in fahrenheit:"); 
scanf("%f",&fahrenheit); 
celsius=(fahrenheit-32)*5/9; 
printf("\nThe temperature in celsius is %0.2f",celsius); 
return 0; 
}