#include<iostream>
#include<vector>
using namespace std;

void intersect(vector<int>&nums1,vector<int>&nums2){
    vector<int>nums3;
    int s1=nums1.size();
    int s2=nums2.size();
    int cnt=0;
    for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(nums1[i]==nums2[j]){
                nums3.push_back(nums2[j]);
                cnt++;
                break;
            }
        }
    }
    for(auto x:nums3){
        cout<<x<<" ";
    }
}

int main()
{
    vector<int>case1={1,2,2,1};
    vector<int>case2={2};
    intersect(case1,case2);
    return 0;
}