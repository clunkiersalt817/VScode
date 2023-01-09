#include <iostream>
#include <vector>
using namespace std;

vector<int> A = {2, 7, 4, 1, 5, 3};
int r = A.size();

void sortedarray(vector<int> &A)
{
    for (int i = 0; i < r; i++)
    {
        cout << A[i] << " ";
    }
}

void selectionsort(vector<int> &A, int l, int r)
{
    if (l >= r)
        return;

    int min = A[l];
    int i = l;

    for (i; i < r; i++)
    {
        if (A[i] < min)
        {
            swap(A[i], A[l]);
            min = A[l];
        }
    }

    selectionsort(A, l + 1, r); // 1,7,4,2,5,3
}

int main()
{
    selectionsort(A, 0, r);
    sortedarray(A);
    return 0;
}