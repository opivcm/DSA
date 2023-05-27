#include<bits/stdc++.h>
using namespace std;
void selesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mid=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid=j;
            }
        }
        return swap(arr[mid],arr[i]);
    }
}
int main()
{
    int a[10];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    selesort(a,k);
}
