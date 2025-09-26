//program to calculate gross salary
#include<stdio.h> 
int main() 
{ 
float gross,base,travel_allowance,medical_allowance,other_allowance,house_rent,deductions; 
printf("\nEnter the base salary:"); 
scanf("%f",&base); 
medical_allowance=base*0.15; 
other_allowance=base*0.10; 
house_rent=base*0.15; 
deductions=base*0.05; 
travel_allowance=base*0.05; 
gross=base+travel_allowance+medical_allowance+other_allowance+house_rent-
deductions; 
printf("\nbase salary= %.2f",base); 
printf("\ntravel allowance= %.2f",travel_allowance); 
printf("\nMedical allowance= %.2f",medical_allowance); 
printf("\nother allowance= %.2f",other_allowance); 
printf("\nhouse rent= %.2f",house_rent); 
printf("\ndeductions= %.2f",deductions); 
printf("\nGross salary= %.2f",gross); 
return 0; 
}