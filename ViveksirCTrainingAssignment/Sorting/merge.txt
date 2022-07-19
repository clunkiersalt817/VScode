#include <iostream>
using namespace std;

// merge sort algorithm

// merge function
void merge(int a[], int l, int mid, int r)
{
    int s;
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[5];

    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i]; // a[i] is smaller than a[j]
            i++;
        }
        else
        {
            temp[k]=a[j]; //a[i] is larger than a[j]
            j++;
        }
        k++;
    }
    if(j>r){
        for(;i<=mid;i++){
            temp[k]=a[i];
            k++;
        }
    }
    if(i>mid){
        for(;j<=r;j++){
            temp[k]=a[j];
            k++;
        }
    }
    for(s=l;s<=r;s++){
        a[s]=temp[s];
    }
}

// merge sort function
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    // int arr[5] ={4,6,1,2,7};
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    mergeSort(arr, 0, 4);
    cout <<endl<< "After Sorting : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}