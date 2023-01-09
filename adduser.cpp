#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=60;i++){
        cout<<"net user /add user "<<i<<" user"<<i<<" /passwordchg:no"<<endl;
    }
    return 0;
}