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
int binarysearch(int a[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {

        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]<key)     //key dodudu  so start is mid+1 and end is same RIGHTSIDE;
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;   //key chikkudu so start will be as it is , end will move to mid-1; LEFTSIDE;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[10];
    int n1;
    int keys;
    cout <<"enter the size of the array"<<endl;
    cin>>n1;
    cout<<"Enter the array "<<endl;
    initial(a,n1);
    cout<<"enter the key to be searched"<<endl;
    cin>>keys;
    std::sort(a,a+n1);
    cout<<"After sorting the array is"<<endl;
    display(a,n1);
    cout<<endl;
    int index=binarysearch(a,n1,keys);
    cout<<"the key is present in "<<index<<"index"<<endl;
    return 0;
}