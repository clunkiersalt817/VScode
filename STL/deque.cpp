// Doubly ended Queue
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.pop_front();
    d.push_front(3);
    d.push_front(2);
    d.push_front(56);
    d.push_front(245);
    d.push_front(7);
    d.push_front(34);
    d.push_front(77);
    d.push_front(34);
    d.erase(d.begin(), d.begin() + 4);
    for (auto i : d)
    {
        cout << i << " ";
    }
    return 0;
}