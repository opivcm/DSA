#include<bits/stdc++.h>
#include<algorithm>
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
    std::sort(ar,ar+n);
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int binarysearch(int ar[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {

        if(ar[mid]==key)
        {
            return mid;
        }
        if(ar[mid]<key)     //key dodudu  so start is mid+1 and end is same RIGHTSIDE;
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;   //key chikkudu so start will be as it is , end will move to mid-1; LEFTSIDE;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}

int main()
{
    int a[10];
    int n1;
    int keys;
    cout<<"Enter the array "<<endl;
    ipsort(a,n1);
    int index=binarysearch(a,n1,keys);
    cout<<"the key is present in "<<index<<endl;
}