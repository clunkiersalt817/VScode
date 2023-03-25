// Create Heap = insert operation in max heap(a complete binary tree).
#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &A, int n)
{

    // at the start n=1 and temp = A[i] i.e.,temp = 5
    // now we do a while loop until we find a greater parent element than our temp

    int i = n;
    int temp = A[i];

    while (i > 0 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

void dElEtE(vector<int> &H, int n)
{
    int temp = H[n];
    int i;
    int deleted=H[0];
    H[0] = temp;
    i = 0;
    int j = 2 * i + 1;
    while (j < n)
    {
        if (H[j + 1] > H[j])
        {
            j += 1;
        }
        if (H[i] < H[j])
        {
            swap(H[i], H[j]);
            i = j;
            j = 2 * i + 1;
        }
        else
            break;
    }
    H[n]=deleted;
}

int main()
{
    vector<int> ans;
    vector<int> H = {2, 5, 8, 9, 4, 10, 7};
    for (int i = 1; i < H.size(); i++)
    {
        insert(H, i);
    }
    for (auto x : H)
        cout << x << " ";

    cout << endl;

    for (int i = H.size() - 1; i >= 0; i--)
    {
        dElEtE(H, i);
    }
    for (auto x : H)
        cout << x << " ";
    return 0;
}