#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void plusOne(vector<int> &digits)
{
    int s = digits.size();
    int sum = 0;
    int i;
    for (i = 0; i < s; i++)
    {
        sum = sum + digits[i] * (pow(10, s - i - 1));
    }
    sum = sum + 1;
    for (i = 0; i < s; i++)
    {
        digits.pop_back();
    }
    for (i = 0; i < s; i++)
    {
        digits.push_back((int)(sum / pow(10, s - i - 1)));
        sum = sum % 10;
    }
    for (auto x : digits)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> digits = {1, 2, 3};
    plusOne(digits);
    return 0;
}