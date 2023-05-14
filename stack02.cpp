#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    int top;
    int size;
    char *s;
};
template<class T>
void push(Stack *t ,char x)
{
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    else
    {
        top++;
        st[top]=x;
    }
}

 int isBalance(char *exp)
 {
    struct Stack st;
    st.size=strlen(exp);
    st.top=-1;
    st.s=new char[st.size];
    for(int i=0;exp[i]!='0')
    {
        if(exp[i]=='9')
           push(&st,exp[i]);
       if else
           if(isEmpty)
            
            
    }
 }