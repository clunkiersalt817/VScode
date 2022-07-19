#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next = NULL;
};

struct node *createNewNode(node **temp, int val)
{
    node *newNode = new node;
    newNode->data = val;
    newNode->next = *temp;
    *temp = newNode;
    return *temp;
}

void display(struct node *t)
{
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int main()
{
    struct node *t = NULL;
    int x;
    int n;
    char option = 'Y';
    while (option == 'Y' || option == 'y')
    {
        cout << "Enter element to create a node : ";
        cin >> x;
        // with first element.
        // enter createNewNode(x) to create and add a newNode
        createNewNode(&t, x);
        cout << "Want to create a new node (Enter Y or N !) : ";
        cin >> option;
    }
    display(t);
    return 0;
}