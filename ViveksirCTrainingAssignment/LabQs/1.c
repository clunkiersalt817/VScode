#include <stdio.h>
int main()
{
    int m, n, i, j, k, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        m = i;
            for (k = 1; k < i+1; k++)
            {
                m = m * i;
            }
        sum = sum + m;
    }
    printf("%d", sum);
    return 0;
}