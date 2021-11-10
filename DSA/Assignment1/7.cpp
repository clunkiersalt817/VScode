#include<iostream>
using namespace std;
int main()
{
    int n,t,q,sum=0;
    cout<<"Enter any number : ";
    cin>>n;
    t=n;
    while(n!=0){
    q=n%10;
    sum=sum+(q*q*q);
    n=n/10;
    }
    if(sum==t){
        cout<<"The number "<<t<<" is Armstrong.";
    }
    else{
        cout<<"The number "<<t<<" is not Armstrong.";
    }
    return 0;
}