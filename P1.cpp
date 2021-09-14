#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * first, *p, *t;

void insert_at_beg(int x1)
{
    p = new node;
    (*p).data = x1;
    p->next = first;
    first = p;
}

void search(int x2)
{
    int pos = 1, flag;
    t = first;
    while (t)
    {
        if ((t->data) == x2)
        {
            cout << "Element found at position : " << pos << endl;
            flag = 1;
            break;
        }
        else
        {
            pos++;
            t = t->next;
        }
    }
    if (flag != 1)
        cout << "Element not found" << endl;
}

void display()
{
    p = first;
    while (p)
    {
        cout << p->data;
        p = p->next;
    }
}

void ele_max()
{
    int pos = 1;
    p = first;
    int max;
    max = p->data;
    p = p->next;
    while (p)
    {
        if (max > p->data)
        {
            p = p->next;
            pos++;
        }
        else if (max < p->data)
        {
            max = p->data;
        }
        else
        {
            break;
        }
    }
    cout << "The largest element is " << max << " at position " << pos;
}

int main()
{
    int x;
    char op;
a:
    cout << "Enter the number : ";
    cin >> x;
    insert_at_beg(x);
    display(); //display the elements
    cout << "\nDo you want to add more data in list :";
    cin >> op;
    if (op == 'y')
        goto a;
    cout << "\nEnter the number you want to search : ";
    cin >> x;
    search(x); //search for x
    ele_max();
    return 0;
}