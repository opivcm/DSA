#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_back(4);
    d.push_front(2);
    cout<<"before erasing "<<endl;
    for(int i:d)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    d.erase(d.end());
cout<<"after erasing "<<endl;
for(int i:d)
{
    cout<<i<<" ";
}
}