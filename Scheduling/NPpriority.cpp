// program for non-preemptive priority scheduling
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> priorityQueue = {2, 6, 3, 5, 7, 4, 10};
    vector<int> arrivalTime = {0, 2, 1, 4, 6, 5, 7};
    vector<int> burstTime = {3, 5, 4, 2, 9, 4, 10};
    sort(arrivalTime.begin(), arrivalTime.end());
    for (auto i : arrivalTime)
    {
        cout << i << " ";
    }
    return 0;
}