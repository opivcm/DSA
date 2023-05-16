#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char damb = 'A';
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {   
            cout<<damb;
            damb+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}
