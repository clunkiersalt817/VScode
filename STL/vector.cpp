/* Given an array nums
inside this array nums we have difffrent colors
these colors represent 0, 1, 2 respectively
and all the 0's then 1's and then 2's should come in this order*/

// Dynamic array
#include <iostream>
#include <vector>
using namespace std;

void func(vector<int>&v){
    int first = 0, mid = 0, last = (v.size()) - 1;
    while (mid <= last)
    {
        if (v[mid] == 0)
        {
            swap(v[first], v[mid]);
            mid++;
            first++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else if (v[mid] == 2)
        {
            swap(v[last], v[mid]);
            last--;
        }
    }
}

int main()
{
    int i;
    // vector<int> *vp = new vector<int>();
    vector<int> v;
    v = {2, 0, 2, 1, 1, 0};
    func(v);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}