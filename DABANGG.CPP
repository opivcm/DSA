#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int t1=n-i+1;
        while(t1)
        {
            cout<<j;
            t1-=1;
            j+=1;
        }
        int t3=1;
        while(t3<i)
        {
            cout<<"*";
            t3+=1;
        }
        int t2=j-1;
       int t4=i-1;
        while(t4)
        {
            cout<<"*";
            t4-=1;
        }
        while(t2)
        {
            cout<<t2;
            t2-=1;
            j-=1;
        }

        cout<<endl;
        i+=1;
    }
}