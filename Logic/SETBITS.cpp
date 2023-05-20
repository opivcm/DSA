#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout << "The total number of set bits in " << n << " is "
         << __builtin_popcount (n) << endl;
 
    return 0;
}