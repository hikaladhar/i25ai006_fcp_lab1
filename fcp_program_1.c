 
 //program to calculate simple interest
 #include<stdio.h> 
    int main() 
    { 
    int principalamount,rate,time; 
    float simpleinterest; 
    printf("\nEnter the principal amount:"); 
    scanf("%d",&principalamount); 
    printf("\nEnter rate of interest:"); 
    scanf("%d",&rate); 
    printf("\nEnter the time(in years):"); 
    scanf("%d",&time); 
    simpleinterest=(principalamount*rate*time)/100; 
    printf("\nSimple Interest is %0.2f",simpleinterest); 
    return 0; 
    }