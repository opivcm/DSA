#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int firstoccur(int a[],int size,int key)//everything same as binary search except = case few changes aste.
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1; //intializing the answer as garbage value.. because when the loop runs we want it to be store the index ..
    while(start<=end)
    {
        if(a[mid]==key)
        {
            ans=mid;//store the index value.
            end=mid-1;
        }
        else if(a[mid]>key)//left wale part..
        {
            end=mid-1;
        }
        else if (a[mid]<key)//right side jaane ke liye..
        {
            start=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastoccur(int a[],int size,int key)//everything same as binary search except = case few changes aste.
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1; //intializing the answer as garbage value.. because when the loop runs we want it to be store the index ..
    while(start<=end)
    {
        if(a[mid]==key)
        {
            ans=mid;//store the index value.
            start=mid+1;
        }
        else if(a[mid]>key)//left wale part..
        {
            end=mid-1;
        }
        else if (a[mid]<key)//right side jaane ke liye..
        {
            start=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int a[50];
    int n1;
    int k;
    cout<<"enter the size of the array"<<endl;
    cin>>n1;
    cout<<"enter the array "<<endl;
    for(int i=0;i<n1;i++)//dont us function for small things like input and function
    {
        cin>>a[i];
    }
    cout<<"Enter the key to be searched"<<endl;
    cin>>k;
    cout<<"The First occurance of key is at index "<<firstoccur(a,n1,k)<<endl;
    cout<<"The Last occurance of key is at index "<<lastoccur(a,n1,k)<<endl;
    return 0;
}