#include <stdio.h>

int binarysearch(int a[], int l, int r, int key)
{
    int mid;
    if (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
        {
            return binarysearch(a, l, mid - 1, key);
        }
        else
            return binarysearch(a, mid + 1, r, key);
    }
    else
        return -1;
}

void merge(int a[], int l, int mid, int r)
{
    int i, j, k, s;
    int temp[5];
    i = l;
    j = mid + 1;
    k = l;
    while (l <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        for (; j <= r; j++)
        {
            temp[k] = a[j];
            k++;
        }
    }
    if (j > r)
    {
        for (; i <= mid; i++)
        {
            temp[k] = a[i];
            k++;
        }
    }
    for (s = l; s <= r; s++)
    {
        a[s] = temp[s];
    }
}

void mergesort(int a[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

void quicksort(int a[], int lb, int ub)
{
    int l, r, p, t;
    l = lb;
    r = ub;
    p = a[lb];
    if (lb >= ub)
        return;
    while (l < r)
    {
        while (a[l] <= p && l < r)
            l++;
        while (a[r] > p)
            r--;
        if (l < r)
        {
            t = a[r];
            a[r] = a[l];
            a[l] = t;
        }
    }
    a[lb] = a[r];
    a[r] = p;
    quicksort(a, lb, r - 1);
    quicksort(a, r + 1, ub);
}

int main()
{
    int k;
    int i;
    int a[5] = {23, 6, 5, 32, 7};
    int b[5] = {23, 5, 67, 43, 12};
    quicksort(a, 0, 4);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    mergesort(b, 0, 4);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d", &k);
    printf("%d", binarysearch(a, 0, 4, k));
    return 0;
}