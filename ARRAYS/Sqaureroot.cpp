#include<bits/stdc++.h>
using namespace std;
long long int sqrtint(int n)
    {
        int s=0;
        int end=n;
        long long int mid=s+(end-s)/2;
        long long int ans=-1;
        while(s<=end)
        {
            long long int sq=mid*mid;
            if(sq==n)
            {
                return mid;
            }
            if(sq<n)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=s+(end-s)/2;
        }
        return ans;
    }

double floatprecise(int n, int precision, int tempsol)
{
    double factor=1;
    double ans=-1;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int tempsol=sqrtint(n);
    cout<<"the answer is "<<floatprecise(n,3,tempsol);
    return 0;
}