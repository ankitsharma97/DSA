 #include<bits/stdc++.h>
 using namespace std;
 struct node
 {
    int data;
    struct node *next;
    
 }*first=0,*firs=0,*u; 
void creat(int a[],int n)
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
 

 void creat2(int a[],int n)
 {
    int i;
    struct node*t,*last;
    firs =(struct node *)malloc(sizeof(struct node));
    firs->data=a[0];
    firs->next=NULL;
    last=firs; 
    for(int i=1;i<n;i++)
    {
      t=(struct node *)malloc(sizeof(struct node));
      t->data=a[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
 }

 void display(struct node *p)
 {
     while (p!=NULL)
     {
      cout<<p->data<<endl;
      p=p->next;     
      
     }
     
 }
//////////recursive
// void display(struct node*p)
// {
//    if (p!=0)
//    {
//       display(p->next);
//       cout<<p->data<<endl;
      
//    }
   
// }


//count element

int count(node *q)
{
   int k=0;
   while(q!=0)
   {
      k++;
      q=q->next;
   }
   return k;
}
 ////sun
 int sum(struct node*k)
 {
   int d=0;
   while (k!=0)
   {
      d=d+k->data;
      k=k->next;
   }
   return d;
 }
 /// 
 /// max elements
 int max(struct node *p)
 {
   int m=-32768;
   while(p!=0)
   {
      if(m<p->data)
      {
         m=p->data;
      }
      p=p->next;
   }
   return m;
 }
 /////search
 node * search(struct node *p,int k)
 {
   while(p!=0)
   {
      if(k==p->data)
      {
         return (p);
      }
      p=p->next;
   }
   return 0;
 }

 /// insertion

 struct node * insert (struct node *p,int x,int k)
{
   node *u=new node;
   u->data=x;
   int i=0;
   while (i!=k-1)
   {
      p=p->next;
      i++;
   }
   u->next=p->next;
   p->next=u;
   return (p);
   
}
////insert in sorted place
// void reinsertion(struct node *p,int x)
// {
//      struct node *t,*q=NULL;
//       node *t=new node;
//       t->data=x;
//       t->next=NULL;
//       if(first==NULL)
//       {
//          first=t;
//       }
//       else{
//          while(p && p->data<x)
//          {
//             q=p;
//             p=p->next;
//          }
//          if(p==first)
//          {
//             t->next=first;
//             first=t;
//          }
//          else{
//             t->next=q->next;
//             q->next=t;
//          }
//       }
// }

void SortedInsert(struct node *p,int x)
{
struct node *t,*q=NULL;
t=(struct node*)malloc(sizeof(struct node));
t->data=x;
t->next=NULL;
if(first==NULL)
first=t;
else
{
while(p && p->data<x)
{
q=p;
p=p->next;
}
if(p==first)
{
t->next=first;
first=t;
}
else
{
t->next=q->next;
q->next=t;
}
}

}


///deleting
int Delete(struct node *p,int pos)
{
   node *q=NULL;
   int x;
   if(pos==1)
   {
      p=first;
      x=first->data;
      first=first->next;
      delete p;
   }
   else
   {
      for(int i=0;i<pos-1;i++)
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



//delete duplicate
struct node *Duplicate_delete(node *p)
{
      node *q=p->next;
      while (q!=0)
      {
         if(p->data!=q->data)
         {
            p=q;
            q=q->next;
         }
         else
         {
            p->next=q->next;
            delete q;
            q=p->next;
         }
      }
      return p;
}

 /// reversing 

  struct node *Reverse_ele(node *p)
  {
   
          int i=0;
          int b[count(p)];
          while (p!=0)
          {
            b[i]=p->data;
            p=p->next;
            i++;
          }
         p=first;
          i--;
           while (p!=0)
          {
           p->data= b[i];
            p=p->next;
            i--;
          }
          return p;
  }

  //reversing using pointer 
  struct node *Rev_Poi(node *p)
  {
     node *q=NULL;
     node * r=NULL;
     while(p!=0)
     {
           r=q;
           q=p;
           p=p->next;
           q->next=r;
     }
     first =q;
     return p;
  }



////merge two sorted

// void Merge_S(struct node *p,struct node *q)
// {
//    struct node *t;
//    if(p->data<q->data)
//    {
//       u=t=p;
//       p=p->next;
//       u->next=NULL;
//    }
//    else
//    {
//       u=t=q;
//       q=q->next;
//       u->next=NULL;
//    }
//    while (p && q)
//    {
//       if(p->data<q->data)
//       {
//          t->next=p;
//          t=p;
//          p=p->next;
//          t->next=NULL;
         
//       }
//       else
//       {
//          t->next=q;
//          t=q;
//          q=q->next;
//          t->next=NULL;
//       }
//       if(p)
//       {
//          t->next=p;
//       }
//       if(q)
//       {
//          t->next=q;
//       }
//    }
//    // return ;
   
// }

void Merge(struct node *p,struct node *q)
{
   struct node *last;
   if(p->data < q->data)
   {
      u=last=p;
      p=p->next;
      u->next=NULL;
   }
   else
   {
      u=last=q;
      q=q->next;
      u->next=NULL;
   }
   while(p!=0 && q!=0)
   {
      if(p->data < q->data)
      {
         last->next=p;
         last=p;
         p=p->next;
         last->next=NULL;
      }
      else
      {

         last->next=q;
         last=q;
         q=q->next;
         last->next=NULL;
      }
   }
   if(p)last->next=p;
   if(q)last->next=q;
}


 int main()
{
   
    int a[5]={1,3,4,6,8};
    creat(a,5);
    int b[5]={0,2,5,7,9};
    creat2(b,5);
//     display(first);
//   cout<<  sum(first)<<endl;
//   cout<<max(first)<<endl;
//   cout<<search(first,6)<<endl;
//   insert(first,8,5);
//  SortedInsert(first,7);
//  cout<<Delete(first,4)<<endl;/* condition */
//   Duplicate_delete(first);
// //   Reverse_ele(first);
// Rev_Poi(first);
//   display(first);
 Merge(first,firs);
  display(u);
  
     
 }