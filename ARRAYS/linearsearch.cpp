#include<bits/stdc++.h>
using namespace std;
bool search(int ar[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(ar[i]==key)
        {
            cout<<"the key is present at index position: "<<ar[i-1]<<endl;
            return 1;
            
        }
    }
    return 0;
}
int main()
{
    int size;
    int ar[10];
    int key;
    int i;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
    
    bool found =search(ar,10, key);
    if(found)
    {
    }
    else cout<<"the key is not present.."<<endl;

}