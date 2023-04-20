#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node * prev;
    int data;
    struct node * next;
}*first=NULL;
void creat(int a[],int n)
{
    node *temp,*last;
    int i;
    first = new node;
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        temp= new node;
         temp->data=a[i];
         temp->next=last->next;
         temp->prev=last;
         last->next=temp;
         last=temp;
    }

}

void Display(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int count (node *p)
{
    int k=0;
    while (p!=0)
    {
        k++;
        p=p->next;
    }
    return k;
}

void insert(node *head,int pos,int x)
{
    node *p=head;
    node *temp;
    
    temp =new node;
    temp->data=x;
    if(pos==0)
    {
        temp->prev=NULL;
        first->prev=temp;
        temp->next=first;
        first=temp;
    }
    else
    {
     for(int i=0;i<pos-1;i++)
     {
        // q=p;
        p=p->next;
     }
     temp->next=p->next;
     temp->prev=p;
     p->next=temp;
      if(p->next!=0)
       {
        temp->next->prev=temp;
       }
    }

}


void Delete(node *head,int pos)
{
    node *p=head,*q=NULL;
    if(pos==1)
    {
        q=p->next;
        q->prev=NULL;
        first=q;

    }
    else
    {
        for(int i=0;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->prev=NULL;
        p->next->prev=q;
        delete p;

    }
}

void Reverse_d(node *p)
{
    node *temp;

    while (p!=0)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=0 && p->next==NULL)
        {
            first=p;
        }
    }
    
}
int main()
{/* condition */
    int a[9]={1,2,3,4,5,6,7,8,9};
    creat(a,9);
    insert(first,5,10);
    Delete(first,1);
    Reverse_d(first);
    Display(first);
    // cout<<count(first);
}