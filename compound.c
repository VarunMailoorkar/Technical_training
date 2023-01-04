#include <stdio.h>  
#include <math.h>  
   
int main() {  
    float principle, rate, time, amount, interest;  
    printf("Enter Principle\n");  
    scanf("%f", &principle);
    printf("Enter Rate of Interest\n");  
    scanf("%f", &rate);  
    printf("Enter Time\n");  
    scanf("%f", &time);  
    amount = principle * pow((1 + rate/100), time);  
    interest = amount - principle;
    printf("After %d Years\n", time);
    printf("Total Amount = %.4f\n", amount); 
    printf("Compound Interest Earned = %.4f", interest);  
   
    return 0;  
}