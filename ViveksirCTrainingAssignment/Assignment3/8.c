#include <stdio.h>
int main()
{
    int sum = 0, n = 1;
    while (n <= 100)
    {
        if (n % 2 == 0)
            sum = sum + n;
        n++;
    }
    printf("%d", sum); 
    return 0;
}