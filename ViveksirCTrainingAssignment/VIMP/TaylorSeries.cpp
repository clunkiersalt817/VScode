#include <iostream>
using namespace std;

float fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

float power(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return m * power(m, n - 1);
}

float taylor(int x, int n)
{
    float sum = 0;
    if (n == 0)
        return 1;
    else
    {
        sum = (power(x, n) / fact(n));
        return sum + (taylor(x, n - 1));
    }
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        cout << taylor(i, 10) << endl;
    }
    return 0;
}