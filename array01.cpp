//reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,4,2,1,3};
    //for print---01
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for print
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    // size of array
    int memo_size=sizeof(arr);
     cout<<endl<<memo_size;
     // now find numbers of elements 
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<endl<<n<<endl;
     //reverse an array
     int start =0;//starting index of array
     int end =n-1;//last index of array
     
     while (start<=end)
     {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
     }
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
     


}