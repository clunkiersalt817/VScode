#include <iostream>
using namespace std;

void displaySorted(int p[4], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i];
    }
}

void Sort(int p[4], int n)
{
    int j, key;
    for (int i = 0; i < n; i++)
    {
        j = i + 1;
        key = p[j];
        while (j >= 0 && p[j - 1] > key)
        {
            p[j] = p[j - 1];
            j--;
        }
        p[j] = key;
    }
}

int main()
{
    int a[4] = {4, 1, 5, 3};
    // cout << "Enter the elements : ";
    // for (int i = 0; i < n; i++)
    //{
    //   cin >> a[i];
    // }
    Sort(a, 4);
    displaySorted(a, 4);
    return 0;
}