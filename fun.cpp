// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
// int data;
// struct Node *next;
// }*first=NULL;
// void create(int A[],int n)
// {
// int i;
// struct Node *t,*last;
// first=(struct Node *)malloc(sizeof(struct Node));
// first->data=A[0];
// first->next=NULL;
// last=first;
// for(i=1;i<n;i++)
// {
// t=(struct Node*)malloc(sizeof(struct Node));
// t->data=A[i];
// t->next=NULL;
// last->next=t;
// last=t;
// }
// }
// void Display(struct Node *p)
// {
// while(p!=NULL)
// {
// printf("%d ",p->data);
// p=p->next;
// }
// }
// int main()
// {
// struct Node *temp;
// int A[]={3,5,7,10,25,8,32,2};
// create(A,8);
// Display(first);
// return 0;
// 




// #include<stdio.h>

// int main()
// {
//     int physics, chemistry;
//     printf("enter physics marks\n");
//     scanf("%d",&physics);

//     printf("enter chemistry marks\n");
//     scanf("%d", &chemistry);
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string s;
    int k=0;
       while(N!=0)
        {
            if(N%2==0)
            {
                s[k]='0';
            }
            else
            {
                s[k]='1';
            }
            k++;
            N=N/2;
        }
        // for(int i=0;i<s.size();i++)
        // {

        // }
        cout<<s;
}