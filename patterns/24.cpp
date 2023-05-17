#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int value=1;
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
            cout<<value;
            j+=1;
            value+=1;
        }
        cout<<endl;
        i+=1;
    }
}