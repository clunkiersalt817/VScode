#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr){

}

int binarySearch(vector<int> &arr, int lb, int ub, int search)
{

    int mid = (lb + ub) / 2;

    if (lb > ub)
        return false;

    else
    {
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (search < arr[mid])
            return binarySearch(arr, lb, mid, search);
        else
            return binarySearch(arr, mid + 1, ub, search);
    }
}

int main()
{
    vector<int> nums = {12,17,4, 7, 8, 11};
    int x;
    int n = nums.size();
    int lb = 0;
    int ub = n - 1;
    int mid = n / 2;
    cin >> x;
    if (nums[lb] < nums[mid])
    {
        cout << binarySearch(nums, lb, mid, x);
    }
    else
        cout << binarySearch(nums, mid + 1, ub, x);
    return 0;
}