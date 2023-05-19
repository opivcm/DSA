#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bits=n&1;
        ans=(bits * (pow(10,i)))+ans;
        n=n>>1;
        i++;

    }
    cout<<"the answer is "<<ans<<endl;

}