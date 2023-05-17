#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space-=1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j+=1;
        }
        while(j<=i)
        {
            cout<<j-1;
            j+=1;
        } 
        int shit=i-1;
        while(shit)
        {
            cout<<shit;
            shit-=1;
        }
        cout<<endl;
        i+=1;
    }
}