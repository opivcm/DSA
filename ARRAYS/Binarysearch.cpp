#include<bits/stdc++.h>
using namespace std;

void ipsort(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
       /*for(int j=i+1;j<size;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                
            }
        }*/
    }
    int n=sizeof(ar)/sizeof(ar[0]);
    sort(ar,ar+n);
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int binarysearch(int ar[],int size)
{
    int key;
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {

        if(ar[mid]==key)
    }
}

int main()
{
    int a[10];
    int key;
    int n1;
    cout<<"Enter the array "<<endl;
    ipsort(a,n1);
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
    cout<<endl;
}