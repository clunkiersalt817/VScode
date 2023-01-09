#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>&A,int start,int end){
    int pivot=A[end];
    int pi=start;
    for(int i=start;i<end;i++){
        if(A[i]<=pivot){
            swap(A[i],A[pi]);
            pi++;
        }
    }
    swap(A[pi],A[end]);
    return pi;
}

void quicksort(vector<int> &A, int start, int end)
{
    if (start < end)
    {
        int pi = partition(A, start, end);
        quicksort(A,start,pi-1);
        quicksort(A,pi+1,end);
    }
}

int main()
{
    vector<int> A = {7, 2, 1, 6, 8, 5, 3, 4};
    int r = A.size()-1;
    quicksort(A, 0, r);
    for(int i=0;i<8;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}