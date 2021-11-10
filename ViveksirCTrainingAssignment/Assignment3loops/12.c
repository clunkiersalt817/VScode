#include <stdio.h>

int series1(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("%d",series(n));
    return 0;
}