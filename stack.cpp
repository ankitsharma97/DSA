// //stack using array 
#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int size;
    int top;
    int *s;
};
void creat(struct Stack *st)
{  
    // cin>>st->size;
    st->top=-1;
    st->s=new int[5];

}
void display(Stack st)
{
    for(int i=st.top;0>=i;i--)
    {
        cout<<st.s[i]<<endl;
    }
}
int stacktop(Stack st)
{
    if(st.top==1)
    {
        return -1;
    }
    else
    {
        return st.s[st.top];
    }
}
int isempty(Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int push(Stack *st ,int x)
{
    if(st->top==st->size-1)
    {
         cout<<"stack overflow"<<endl;
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
    return x;
}
 
void pop(Stack *st)
{
    int x=-1;
    if (st->top==0)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        x=st->s[st->top];
        st->top--;
    }
}
int peak(Stack st,int pos)
{
    int index=st.top-pos+1;
    int x=-1;
    if(index<0)
    {
        cout<<"wrong pos"<<endl;
    }
    else
    {
        x=st.s[index];
    }
    return x;
}
int main()    
{
    struct Stack st;
    // cout<<"Enter the size of stack "<<endl;
    // cin>>st.size;
    // st.s =new int[st.size]; 
    // st.top=-1;
    creat(&st);
    push(&st,96);
    push(&st,95);
    display(st);

}





// #include <iostream>
// using namespace std;
// template<class T>
// class Stack
// {
// private:
// T *st;
// int size;
// int top;
// public:
// Stack(){size=10;top=-1;st=new T[size];}
// Stack(int size){this->size=size;top=-1;st=new
// T[this->size];}
// void push(T x);
// T pop();
// T peek(int index);
// int stacktop();
// int isEmpty();
// int isFull();
// void Display();
// };
// template<class T>
// void Stack<T>::push(T x)
// {
// if(isFull())
// cout<<"Stack Overflow"<<endl;
// else
// {
// top++;
// st[top]=x;
// }
// }template<class T>
// T Stack<T>::pop()
// {
// T x=-1;
// if(isEmpty())
// cout<<"Stack underflow"<<endl;
// else
// {
// x=st[top];
// top--;
// }
// return x;
// }
// template<class T>
// T Stack<T>::peek(int index)
// {
// T x=-1;
// if(top-index+1<0)
// cout<<"Invalid Index"<<endl;
// else
// x=st[top-index+1];
// return x;
// }
// template<class T>
// int Stack<T>::stacktop()
// {
// if(isEmpty())
// return -1;
// return st[top];
// }
// template<class T>
// int Stack<T>::isFull()
// {
// return top==size-1;
// }template<class T>
// int Stack<T>::isEmpty()
// {
// return top==-1;
// }
// template<class T>
// void Stack<T>::Display()
// {
// for(int i=top;i>=0;i--)
// cout<<st[i]<<" ";
// cout<<endl;
// }
// int main()
// {
// Stack<char> stk(5);
// stk.push('a');
// stk.push('b');
// stk.push('c');
// stk.push('d');
// stk.push('e');
// stk.push('f');
// stk.Display();
// cout<<stk.peek(1)<<endl;
// return 0;
// }