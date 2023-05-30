#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int , string > m;
    m[1]="SAMU";
    m[0]="DAMB";
    m[999]="keeku";
   
    m.insert({6,"PYARI"});
    m[5]="and";//so m() ge first priority rather than the insert.. when both the key is same..
    for(auto i: m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


    auto it=m.find(5);//finds all the keys which are greater than 5
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }


}