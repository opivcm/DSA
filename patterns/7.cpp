#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=2;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count-1<<" ";
            j+=1;
            count+=1;
        }
    
    cout<<endl;
    i+=1;
    }
}