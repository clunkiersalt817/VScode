#include <iostream>
#include <string>
using namespace std;

struct node
{
    char c;
    node *next;
    node()
    {
        next = nullptr;
    }
};

class stack
{
private:
    node *head;

public:
    stack()
    {
        head = nullptr;
    }

    bool isEmpty()
    {
        if (!this->head)
            return true;
        else
            return false;
    }

    char pop()
    {
        if (this->isEmpty())
        {
            return '\a';
        }
        else
        {
            node *tmp = this->head;
            this->head = (this->head)->next;
            char c = tmp->c;
            return c;
        }
    }

    void push(char c)
    {
        struct node *newnode;
        newnode = new node;
        newnode->c = c;
        if (this->isEmpty())
        {
            this->head = newnode;
        }
        else
        {
            newnode->next = this->head;
            this->head = newnode;
        }
    }
};

bool iterater(string &exp)
{
    stack list;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '{' || 
            exp[i] == '(' || 
            exp[i] == '[')
            list.push(exp[i]);
            if (exp[i] == '}' || 
                exp[i] == ')' || 
                exp[i] == ']')
            {
                char c = list.pop();
                if (c == '\a')
                    return false;
                else
                {
                    if (c == '{' && exp[i] == '}' || 
                        c == '(' && exp[i] == ')' || 
                        c == '[' && exp[i] == ']')
                        ;
                    else
                        return false;
                }
            }
        }
    if (list.isEmpty())
        return true;
    else
        return false;
}

int main()
{
    string exp;
    cout << "Enter the expression to check for parenthesis match : ";
    getline(cin, exp);
    if (iterater(exp))
        cout << "the expression " << exp << " is consistent in brackets";
    else
        cout << "the expression " << exp << " is inconsistent in brackets";
    return 0;
}