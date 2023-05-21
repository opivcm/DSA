#include<bits/stdc++.h>
using namespace std;

void initialise(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
}

void sortone(int ar[],int size)
{
    int left=0, right=size-1;
    while(left<right)
    {
       /*cout<<"step"<<step++<<endl;
        printarray(ar,size);*/
        while(ar[left]==0 && left<right)
        {
            left++;
        }
        while(ar[right]==1 && left<right)
        {
            right--;
        }
        swap(ar[left],ar[right]);
        left++;
        right--;
    }

}

void printarray(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[50],b [50];
    int n,n1;
    cout<<"enter the size of the first array"<<endl;
    cin>>n;
    initialise(a,n);
    cout<<"enter the size of the second array"<<endl;
    cin>>n1;
    initialise(b,n1);

    sortone(a,n);
    printarray(a,n);

    sortone(b,n1);
    printarray(b,n1);
}