#include<bits/stdc++.h>
using namespace std;
void reverse(char name[], int n)
{
    int st=0;
    int end=n-1;
    while(st<end)
    {
        swap(name[st++],name[end--]);
    }
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
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    int len=length(name);
    cout<<"lenght of your name is "<<len<<endl;
    reverse(name,len);
    cout<<"your name in reverse is ";
    cout<<name<<endl;
    return 0;
}