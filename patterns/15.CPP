#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int value=2;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {   
            char damb = 'A'+ value -2;
            cout<<damb;
            value=value+1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
