#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>  maxi;
    priority_queue<int ,vector<int>,greater<int>> mini;
    maxi.push(0);
    maxi.push(1);
    maxi.push(999);
    maxi.push(2);
    int n= maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(1);
    mini.push(0);
    mini.push(99);
    mini.push(9);
    int o=mini.size();
    for(int j=0;j<o;j++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }

}