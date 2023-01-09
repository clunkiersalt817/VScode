#include <vector>
#include <iostream>
using namespace std;

vector<int> nums = {2, 7, 4, 1, 5, 3};
int r = nums.size();
void bubblesort(vector<int> &nums,int n)
{
    if(n<=0)
    return;
    for (int i = 0; i < n-1; i++)
    {
        if (nums[i] > nums[i + 1])
            swap(nums[i], nums[i + 1]);
    }
    bubblesort(nums,n-1);
}

int main()
{
    bubblesort(nums,r);
    for(int i=0;i<r;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}