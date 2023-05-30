#include<bits/stdc++.h>
using namespace std;
int main()
{
    //repetition doesnt work in set.
    set<int> s;
    s.insert(0);
    s.insert(5);
    s.insert(8);
    s.insert(7);
    s.insert(5);
    s.insert(7);

    for( auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    set<int>::iterator le=s.begin();
    for(int j=0;j<2;j++)  //erasing the 2 element in the set... 0 5 7 8 , 7 is the 2nd element so it is removed
    {
        le++;
    }
    s.erase(le);
    for(auto i: s)
    {
        cout<<i<< " ";
    }
}