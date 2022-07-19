#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

void createNewNode(node **temp, int val)
{
    node *newNode = new node();
    newNode->val = val;
    newNode->next = *temp;
    *temp = newNode;
}

void addTwoNumbers(node *l1, node *l2)
{
    int carry = 0;
    node *l3 = NULL;
    node *t = l3;
    while (l1 || l2 || carry)
    {
        int sum = 0;
        if (l1)
        {
            sum = sum + l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum = sum + l2->val;
            l2 = l2->next;
        }
        sum = sum + carry;
        carry = sum / 10;

        createNewNode(&l3,sum%10);
    }
    while (l3)
    {
        cout << l3->val << " ";
        l3 = l3->next;
    }
}

int main()
{
    node *l1 = NULL;
    node *l2 = NULL;

    cout<<"Enter a number in a linked list : ";

    addTwoNumbers(l1,l2);

    return 0;
}