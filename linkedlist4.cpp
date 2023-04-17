#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*head;
void creat(int a[],int n)
{
    int i;
    struct node *temp,*last;
    head =(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
      for(int i=0;i<n;i++)
      {
        temp =(struct node *)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=last->next;
        last->next= temp;
        last=temp;
       }
    

}
void display(struct node *h)
{
    do
    {
        cout<<h->data<<endl;
        h=h->next;
    } while (h!=head);
    
}

void insert(node *head,int pos,int x)
{
    node *p,*t;
    if(pos==0)
    {
        t=new node;
        t->data=x;
        if(head==0)
        {
            head =t;
            head=head->next;
        }
        else
        {
        
        t->next=p->next;
            p=head;
            while (p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
            
        }

     }
    else
    {
        t=new node;
        t->data=x;
        p=head;
        for(int i=0;i<pos;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}


void Delete(node *p,int pos)
{
    node *q=p;
    node *r=NULL;
    if (pos==0)
    {
        node *t=head;
        while (t->next!=head)
        {
            t=t->next; 
        }
        //  head =head->next;
        t->next=head->next;
        // delete head;
        head=head->next;
       
        
    }
    else
    {
    for(int i=0;i<pos-1;i++)
    {
        r=q;
        q=q->next;
    }
    r->next=q->next;
    delete q;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    creat(a,5);
    insert(head,4,6);
    Delete(head,10);
    display(head);


} 