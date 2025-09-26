//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER 
#include<stdio.h> 
int main(){ 
char ch; 
printf("\nEnter a character:"); 
scanf("%c",&ch); 
if(ch>='A' && ch<='Z') 
printf("\n%c is a capital letter",ch); 
else if(ch>='a' && ch<='z') 
printf("\n%c is a small letter",ch); 
else if(ch>='0' && ch<='9') 
printf("\n%c is a number",ch); 
else 
printf("\n%c is a special symbol"); 
return 0; 
}