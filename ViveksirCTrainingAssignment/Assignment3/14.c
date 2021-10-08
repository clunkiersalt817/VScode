#include <stdio.h>

double series3(float n)
{
    if (n == 1)
        return 1;
    else
        return series3(n-1)+1/n;
}

int main()
{
    float n;
    printf("Enter any number : ");
    scanf("%f", &n);
    printf("%lf", series3(n));
    return 0;
}