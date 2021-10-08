#include <stdio.h>
int main()
{
    float n, i, p, q;
    float sum = 0;
    printf("Enter any number : ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        p = i;
        q = i + 1;
        sum = sum + (p / q);
    }
    printf("%f", sum);
    return 0;
}