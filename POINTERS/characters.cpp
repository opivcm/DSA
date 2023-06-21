#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,9};
    char ch[6]="vinay";

    cout<<arr<<endl;            //prints ADDRESS
    cout<<ch<<endl;             //prints WHOLE CHARACTER

    char *c=&ch[0]; 
    cout<<c<<endl;              //prints WHOLE CHARACTER
    //cout<<*c<<endl;             //first Character
    //cout<<&c<<endl;             //address where it is stored & address

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;              
    return 0;
}