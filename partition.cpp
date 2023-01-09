#include<iostream>
#include<vector>
using namespace std;

void partition(vector<int>&A,int start,int end){
    int pivot=A[end];
    for(int i=0;i<end;i++){
        if(A[i]<=pivot){
            
        }
    }
}

int main()
{
    vector<int>A={9,5,2,6,7};
    int s=A.size();
    partition(A,0,s);
    return 0;
}