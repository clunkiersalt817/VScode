#include <stdio.h>
int main()
{
    int n, cnt = 1, i, j = 0, k, p, t, f = 2, l = 1;
    float fact, m, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
    {
        m = 1;
        j = j + 2;
        fact = 1;
        l = 1;
        for (k = 1; k <= j; k++)
        {
            m = m * i;
        }
        for (p = 1; p <= f; p++)
        {
            fact = fact * p;
        }
        for (t = 1; t <= f / 2; t++)
        {
            fact = fact * l;
            l = fact;
        }
        f = f * 2;
        if (cnt % 2 == 0)
            sum = sum - m / fact;
        else
            sum = sum + m / fact;
        cnt++;
    }
    printf("%f", sum);
    return 0;
}