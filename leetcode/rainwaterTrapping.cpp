#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    vector<int> height = {0, 1, 3, 1, 2, 0, 4, 2, 4, 0};
    deque<int> leftmax;
    deque<int> rightmax;
    int n = height.size();
    int lmax, rmax;
    int sum = 0;
    lmax = height[0];
    rmax = height[n - 1];
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (height[i] >= lmax)
        {
            lmax = height[i];
            leftmax.push_back(lmax);
        }

        else
        {
            leftmax.push_back(lmax);
        }

        if (height[j] >= rmax)
        {
            rmax = height[j];
            rightmax.push_front(rmax);
        }

        else
        {
            rightmax.push_front(rmax);
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << leftmax.at(j) << " ";
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << rightmax.at(j) << " ";
    }
    cout << endl;
    for (int k = 0; k < n; k++)
    {
        sum = sum + min(leftmax.at(k), rightmax.at(k)) - height[k];
    }
    cout << sum;
    return 0;
}