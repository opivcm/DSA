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
int length(char name[])
{
    int count=0;
    for(int i=0;name[i]!=0;i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter a word"<<endl;
    cin>>name;
    int len=length(name);
    cout<<"lenght of your name is "<<len<<endl;
    cout<<"palindrone or not"<<palindrome(name,len);
    return 0;
    
}