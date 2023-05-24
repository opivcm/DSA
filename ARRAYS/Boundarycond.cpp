#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void initial(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
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
/*int lastoccur(int a[],int size,int key)//everything same as binary search except = case few changes aste.
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
}*/
int main()
{
    int a[10];
    int n1;
    int key;
    cout<<"enter the size of the array"<<endl;
    cin>>n1;
    cout<<"enter the array of size "<<n1<<endl;
    initial(a,n1);
    cout<<"Enter the key to be seacrhed"<<endl;
    cin>>key;
    cout<<"The First occurance of key is at index "<<firstoccur(a,n1,key)<<endl;
   /* cout<<"The Last occurance of key is at index "<<lastoccur(a,n1,key)<<endl;/*
    return 0;
}