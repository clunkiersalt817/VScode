#include<iostream>
using namespace std;
int main()
{
    int f1=0,f2=1;
    int n;
    cin>>n;
    cout<<f1<<" ";
    for(int i=1;i<n;i++){
        f1=f2-f1;
        f2=f1+f2;
        cout<<f1<<" ";
    }
    return 0;
}