// list in STL is doubly linked list
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l; // first list
    l.push_back(1);
    l.push_front(2);
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    list<int> n(l); // second list to copy the elements of first list

    l.erase(l.begin());

    for (auto i : n)
    {
        cout << i << " ";
    }
    cout << "size of list : " << l.size() << endl;
    return 0;
}