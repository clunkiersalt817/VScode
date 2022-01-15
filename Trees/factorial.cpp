#include<iostream>
using namespace std;

int fact(int r){
    int fact=1;
    for(int i=1;i<=r;i++){
        fact=fact*i;
    }
    return fact;
}

int addfact(int r){
    int addfact=0;
    for(int i=1;i<=r;i++){
    addfact=addfact+fact(i);
    }
    return addfact;
}

int c(int n,int r){
    if(r==0||n==r)
    return 1;
    else
    return c(n-1,r-1)+c(n-1,r);
}

int catalan(int n){
    return c(2*n,n)/(n+1);
}

int main(){
    int r,n;
    cout<<"Enter number to calculate factorial : ";
    cin>>r;
    cout<<fact(r);
    cout<<"\nCalculate combination (Enter n and r) : ";
    cin>>n>>r;
    cout<<c(n,r);
    cout<<"\nNumber of trees for a given number of nodes : ";
    cin>>n;
    cout<<catalan(n);
    cout<<"Enter factorials to add from 1 to n";
    cin>>n;
    cout<<addfact(n);
    return 0;
}