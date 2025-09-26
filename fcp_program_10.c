//program to calculate cutoff marks
#include<stdio.h> 
int main(){ 
int p,c,m,e; 
float cm; 
printf("\nEnter the marks obtained in mathematics(out of 200):"); 
scanf("%d",&m); 
printf("\nEnter the marks obtained in physics(out of 200):"); 
scanf("%d",&p); 
printf("\nEnter the marks obtained in chemistry(out of 200):"); 
scanf("%d",&c); 
printf("\nEnter the marks obtained in entrance exam(out of 100):"); 
scanf("%d",&e); 
cm=(m/2)+(p/2)+(c/2)+e; 
printf("\nCutoff marks is %.2f",cm); 
return 0; 
} 