#include <iostream>
#include <array>
using namespace std;
int main()
{

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    cout << "size of the array :" << size << endl;
    cout << "First element is : " << a.front() << endl;
    cout << "last element is : " << a.back() << endl;
    return 0;
}