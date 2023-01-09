#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
vector<int> maxSliding(vector<int> &nums, int k)
{
    int maxWindowElement;
    int i;
    int n = nums.size();
    deque<int> window;
    vector<int> max;
    if (k == 1)
    {
        return nums;
    }
    else
    {
        for (i = 0; i < k; i++)
        {
            window.push_back(nums[i]);
        }
        for (i; i <= n; i++)
        {
            maxWindowElement = *max_element(window.begin(), window.end());
            max.push_back(maxWindowElement);
            window.pop_front();
            window.push_back(nums[i]);
        }
        return max;
    }
}

int main()
{
    vector<int> vec = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vec = maxSliding(vec, k);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}