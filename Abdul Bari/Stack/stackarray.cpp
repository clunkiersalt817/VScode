#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void push(stack *st, int x){
    if(st->top==st->size-1){
        cout<<"Stack Overflow !!!"<<endl;
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

void pop(stack *st){
    int item;
    if(st->top==-1){
        cout<<"Stack Underflow !!!"<<endl;
    }
    else
    {
        item=st->s[st->top--];
        cout<<item<<" is Popped."<<endl;
        cout<<"Now the top element is : "<<st->s[st->top]<<endl;
    }
}

void display(stack st){
    cout<<"Stored elements of the stack are : "<<endl;
    for(int j=st.top;j>=0;j--){
        cout<<st.s[j]<<endl;
    }
} 

int main()
{
    int x;
    struct stack st;
    cout<<"Enter the size of stack : ";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    cout<<"Enter the elements : ";
    for(int i=1;i<=st.size;i++){
        cin>>x;
        push(&st,x);
        cout<<st.s[st.top]<<" is pushed."<<endl;
    }
    cout<<endl;
    display(st);
    cout<<endl;
    pop(&st);
    cout<<endl;
    display(st);
    return 0;
}