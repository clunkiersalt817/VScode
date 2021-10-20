#include<iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void push(stack *st,int x){
    if(st->top==st->size-1){
        cout<<"Stack Overflow !!!"<<endl;
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

int pop (stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack underflow !!!"<<endl;
    }    
    else
    {
        x=st->s[st->top--];
    }
    return x;
}

void display(stack st){
    for(int i=st.top;i>-1;i--){
        cout<<st.s[i]<<endl;
    }
}

int main()
{
    int j,k;
    struct stack st;
    cout<<"Enter stack size : ";
    cin>>st.size;
    st.s=new int[st.size];
    st.top=-1;
    for(int j=0;j<st.size;j++){
        cout<<"Enter the element to push : ";
        cin>>k;
        push(&st,k);
    }
    display(st);
    return 0;
}