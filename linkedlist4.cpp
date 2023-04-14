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
int main()
{
    int a[]={1,2,3,4,5};
    creat(a,5);
    display(head);

}