#include <iostream>
#include <string>
using namespace std;

class account
{
private:
    string name;
    double balance;

public:
    void set_balance(double bal){balance=bal;};
    double get_balance(){return balance;};
};
int main()
{
    account kshitiz;
    double bal;
    cout<<"Enter the amount you want to credit :";
    cin>>bal;
    kshitiz.set_balance(bal);
    cout<<kshitiz.get_balance();
    return 0;
}