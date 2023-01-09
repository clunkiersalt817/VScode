// Find the number whose absence in the array does not change the net average of the array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int n = vec.size();
    int avg1 = 0;
    int avg2;
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        avg1 = avg1 + vec[i];
    }

    avg1 = avg1 / n;
    vec.erase(vec.begin() + mid);

    for (int i = 0; i < vec.size(); i++)
    {
        avg2 = avg2 + vec[i];
    }
    avg2 = avg2 / vec.size();
    if (avg1 == avg2)
    {
        cout << avg2;
    }
    return 0;
}