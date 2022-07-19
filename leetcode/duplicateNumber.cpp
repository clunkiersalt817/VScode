/* -Used the tortoise and hare method
-slow and fast pointers or variables are used to point to the indices of the array
-after some steps slow and fast pointers come at same point.
-fast pointer set to point the first element of the array
-now both fast and slow pointer are moved with same speed until they point the same element. */

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    vector<int> n;
    n = {1, 4, 2, 5, 3, 6, 7, 4};
    cout << findDuplicate(n);
    return 0;
}