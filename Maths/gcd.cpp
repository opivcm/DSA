#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    
    if(b==0)
        return a;
    
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter the value of A and B"<<endl;
    cin>>a>>b;

    int ans=gcd(a,b);
    cout<<"The GCD of A and B is "<<ans<<endl;

    return 0;
}

//relation betwween LCM and GCD is LCM(a,b)*GCD(a,b)=a*b;