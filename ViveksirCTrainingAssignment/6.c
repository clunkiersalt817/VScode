//WAP to calculate simple interest.
#include<stdio.h>
int main()
{   float rate, principal, interest;
    int days, years;
    printf("Enter the interest rate, principal amount, and number of days(or years) respectively.\n");
    scanf("%f%f%d",&rate,&principal,&days);
    printf("The simple interest calculated is : %f",rate*principal*days/100);
    return 0;
}