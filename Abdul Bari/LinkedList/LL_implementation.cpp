#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LL
{
    node *head;

public:
    LL()
    {
        head = NULL;
    }
    void insertnode(int);
    void printlist();
};

void LL::insertnode(int data)
{

    node *newnode = new node(data);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
}

void LL::printlist()
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    LL list;
    list.insertnode(1);
    list.insertnode(2);
    list.insertnode(3);
    list.insertnode(4);
    list.insertnode(5);
    list.insertnode(6);
    list.insertnode(7);
    list.insertnode(8);
    list.printlist();
    return 0;
}