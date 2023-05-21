#include<bits/stdc++.h>
using namespace std;

void initial(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
}

void swap(int ar[],int size)
{
    for(int i=0;i<size;i+=2)//this is most important the logic part others are just easy-peasy
    {
        if(i+1<size)
        {
            swap(ar[i],ar[i+1]);
        }
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
    int a[10],b[10];
    int n,n1;
    cout<<"initialize the size of first array"<<endl;
    cin>>n;
    initial(a,n);
    cout<<"intialize the size of second array"<<endl;
    cin>>n1;
    initial(b,n1);

    swap(a,n);
    printarray(a,n);

    swap(b,n1);
    printarray(b,n1);

    return 0;
}