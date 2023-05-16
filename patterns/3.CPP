#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        /*int j=n;
        while(j>0)
        {
            cout<<j;
            j-=1;
        }
        cout<<endl;
        i+=1;*/
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;
            j+=1;
        }
        cout<<endl;
        i+=1;

    }

}

