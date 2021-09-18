#include<stdio.h>
int main()
{
    int lyear;
    printf("Enter any year to check if it is a leap year or not : ");
    scanf("%d",&lyear);
    if(lyear%4==0)
    printf("The year %d is a leap year.",lyear);
    else
    printf("The year %d is not a leap year.",lyear);
    return 0;
}