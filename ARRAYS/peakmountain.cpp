#include<bits/stdc++.h>
using namespace std;
int find_peak(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]<a[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int a[50];
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for (int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    int k=sizeof(a)/sizeof(int);
    int index=find_peak(a,k);
    cout<<"the pivot element is at the index "<<index<<" and it's value is "<<a[index]<<endl;
    return 0;
}
