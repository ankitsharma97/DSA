#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*top=NULL;
void push(int x)
{
    node *t;
    t=new node;
    if(t==NULL)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
    
    

}


 int pop()
 {
    int x=0;
    struct node *t;
    if(top==0)
    {
        cout<<"stack is empty "<<endl;
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
 }


 void Display()
{
    struct node *p=top;
    while(p!=0)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
 }
 int main()
 {
    push(10);
    push(20);
    push(30);
    Display();
 }




///Stack using Linked List
// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
// int data;
// struct Node *next;
// }*top=NULL;
// void push(int x)
// {
// struct Node *t;
// t=(struct Node*)malloc(sizeof(struct Node));
// if(t==NULL)
// printf("stack is full\n");
// else
// {
// t->data=x;
// t->next=top;
// top=t;
// }
// }
// int pop()
// {
// struct Node *t;
// int x=-1;
// if(top==NULL)
// printf("Stack is Empty\n");
// else
// {
// t=top;top=top->next;
// x=t->data;
// free(t);
// }
// return x;
// }
// void Display()
// {
// struct Node *p;
// p=top;
// while(p!=NULL)
// {
// printf("%d ",p->data);
// p=p->next;
// }
// printf("\n");
// }
// int main()
// {
// push(10);
// push(20);
// push(30);
// Display();
// printf("%d ",pop());
// return 0;
// }