#include <iostream>
using namespace std;

void displaySorted(int p[7], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }
}

void quicksort(int a[7], int lb, int ub)
{
    int l, r, p, t;
    if (lb >= ub)
        return;
    l = lb;
    r = ub;
    p = a[lb];
    while (l < r)
    {
        while (a[l] <= p && l < r)
            l++;
        while (a[r] > p)
            r--;
        if (l < r)
        {
            t = a[l];
            a[l] = a[r];
            a[r] = t;
        }
    }
    a[lb] = a[r];
    a[r] = p;
    quicksort(a, lb, r - 1);
    quicksort(a, r + 1, ub);
}

int main()
{
    int a[7] = {5,10,6,8,7,11,9};
    quicksort(a, 0, 6);
    displaySorted(a, 7);
    return 0;
}