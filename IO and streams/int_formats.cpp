#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=1238645;
    cout<<dec<<a<<endl;
    cout<<showbase<<hex<<a<<endl;
    cout<<resetiosflags(ios::showbase)<<oct<<a<<endl;
}