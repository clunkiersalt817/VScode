#include<iostream>
using namespace std;

void print_num(int n){
    if(n>1)
    print_num(n-1);
    cout<<n<<endl;
}

int main()
{
    int cnt;
    cin>>cnt;
    print_num(cnt);
    return 0;
}