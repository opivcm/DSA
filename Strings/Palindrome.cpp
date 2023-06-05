#include<bits/stdc++.h>
using namespace std;
bool palindrome(char a[], int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cout<<"Enter a word"<<endl;
    cin>>name;
    
}