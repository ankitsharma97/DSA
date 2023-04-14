#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class LinkedList
{
private:
    node *first;
public:
    LinkedList();
    // {first=NULL;}
    LinkedList(int a[],int n);
    ~LinkedList();
    void display();
    void insert(int pos,int x);
    int count();
    int Delete(int pos);

};
 LinkedList::LinkedList(int a[],int n)
 {
     int i;
    struct node*t,*last;
    first =(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first; 
    for(int i=1;i<n;i++)
    {
      t=(struct node *)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
 }
 LinkedList::~LinkedList()
 {
    node *p=first;
    while (first)
    {
        first=first->next;
        delete p;
        p=first;

    }
    
 }
 void LinkedList::display()
 {
    node *p=first;
    while (p!=0)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
 }
int LinkedList::count()
{
    node *p=first;
    int k=0;
    while (p!=0)
    {
        k++;
        p=p->next;
    }
    return k;
}
void LinkedList ::insert(int pos,int x)
{
    node *t,*p=first;
    t=new node ;
    t->data=x;
    if(pos <0 || pos >count())
    {
        return ;
    }
    if(pos==0)
    {
        t->next=first;
        first =t;
    }
    else
    {
        for(int i=0;i<pos;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}
int LinkedList::Delete(int pos)
{
    if(pos <0 || pos >count())
    {
        return -1;
    }
    node *p,*q=NULL;
    int x;
    if(pos==1)
    {
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }
    else
    {
        p=first;
        for(int i=0;i<pos;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
             q->next=p->next;
             x=p->data;
            delete p;//free(p)
        }
        p=p->next;
        q=q->next; 
    }
    return x;

}
int main ()
{
    int a[5]={1,2,3,4,5};
    LinkedList b(a,5);
    b.insert(0,2);
    cout<<b.Delete(4)<<endl ;
    b.display();
}
  


