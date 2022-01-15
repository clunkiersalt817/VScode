#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void push(struct node **t, int n)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = *t;
    (*t) = newnode;
}

void display(struct node *t)
{
    while (t)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

int main()
{
    int x;
    char ch;
    struct node *top = NULL;
    do
    {
        printf("Enter the element you want to enter : ");
        scanf("%d", &x);
        push(&top, x);
        printf("Do you want to continue push operation (Enter 'y') : ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    display(top);
    return 0;
}