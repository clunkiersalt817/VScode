struct Queue
{
    int size;
    int front;
    int rear;
    int *q;
};

void enqueue(int x, struct Queue *q)
{

    if ((*q).rear == ((*q).size) - 1)
    {
        printf("Overflow !!!\n");
    }

    else
    {
        (*q).rear += 1;
        (*q).q[(*q).rear] = x;
    }
}

void dequeue(struct Queue *q)
{
    if ((*q).front == (*q).rear)
    {
        printf("Underflow !!!");
    }
    else
    {
        (*q).front += 1;
    }
}

void display(struct Queue t)
{
    int i;
    for (i = t.front + 1; i < t.size; i++)
    {
        printf("%d", t.q[i]);
    }
}