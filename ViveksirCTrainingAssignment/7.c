#include<stdio.h>
int main()
{
    float avg, perc1, perc2;
    float n1, n2;
    printf("Enter two numbers : ");
    scanf("%f%f",&n1,&n2);
    avg=(n1+n2)/2;
    perc1=(n1/(n1+n2))*100;
    perc2=(n2/(n1+n2))*100;
    printf("The average is : %f and \nThe percentage is: %f and %f",avg,perc1,perc2);
    return 0;
}