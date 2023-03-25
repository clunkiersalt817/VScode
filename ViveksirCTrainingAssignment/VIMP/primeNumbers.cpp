#include<iostream>
using namespace std;
int main()
{
    for(int x=2;x<10000;x++){
        int cnt=0;
        for(int i=1;i<=x;i++){
            if(x%i==0){
                cnt++;
            }
        }
        if(cnt==2)
            cout<<x<<" ";
    }
    return 0;
}