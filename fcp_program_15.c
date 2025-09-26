//grade/division of a student
#include<stdio.h> 
int main(){ 
int m1,m2,m3,m4,m5,total,avg; 
printf("\nEnter marks of mathematics:"); 
scanf("%d",&m1); 
printf("\nEnter marks of physics:"); 
scanf("%d",&m2); 
printf("\nEnter marks of chemistry:"); 
scanf("%d",&m3); 
printf("\nEnter marks of english:"); 
scanf("%d",&m4); 
printf("\nEnter marks of computer science:"); 
scanf("%d",&m5); 
total=(m1+m2+m3+m4+m5); 
avg=total/5; 
printf("\ntotal marks obtained is:%d",total); 
printf("\naverage is %d",avg); 
if(avg>90 && avg<=100) 
printf("\nA grade"); 
else if(avg>80 && avg<=90) 
printf("\nB grade"); 
else if(avg>70 && avg<=80) 
printf("\nc grade"); 
else if(avg>60 && avg<=70) 
printf("\nD grade");
else if(avg>50 && avg<=60) 
printf("\nE grade"); 
else 
printf("\nFAIL"); 
return 0; 
}