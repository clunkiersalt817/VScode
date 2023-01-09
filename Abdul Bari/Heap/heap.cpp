// Create Heap = insert operation in max heap(a complete binary tree).
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insert(vector<int> &v, int i)
{
    int temp = v[i];
    while ((i > 0) && (temp > v[i / 2]))
    {
        swap(v[i / 2], v[i]);
        i = i / 2;
    }
}

void deleted(vector<int> &v, int i)
{
    int temp = v[i];
}

void createHeap(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        insert(v, i); // at index 1 is 13 i.e, the first element to be inserted.
    }
}

int main()
{ //    index           0  1   2   3  4  5
    vector<int> vec = {20, 13, 45, 3, 9, 33};
    int n = vec.size();
    int temp = vec[n - 1];
    int i;
    createHeap(vec);
    for (i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}