#include <iostream>
#include <vector>
using namespace std;
//                                                           l              r
void quicksort(vector<int> &v, int lb, int ub) // now, vec={16, 1, 0, 9, 100}
{
    int l = lb, r = ub, p = v[0];
    if (l > r)
        return;
    while (l < r)
    {
        while (v[l] <= p && l < r)
        {
            l++;
        }
    }
}

void square(vector<int> &square)
{
    int n = square.size();
    for (int i = 0; i < n; i++)
    {
        square[i] = square[i] * square[i];
    }
}

int main()
{
    vector<int> vec = {-4, -1, 0, 3, 10};
    int n = vec.size();
    square(vec);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    // quicksort(vec, 0, n - 1);
    return 0;
}