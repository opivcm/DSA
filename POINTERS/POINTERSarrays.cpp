#include<bits/stdc++.h>
using namespace std;
int main()
{
//int arr[20]={99,2,3,4,5,65,6,7,8};
//cout<<&arr[0]<<endl;                    //address
//cout<<&arr<<endl;                       //address
//cout<<arr<<endl;                        //address

//int *p= &arr[0];
//cout<<p<<endl;                          //bari p is address
//cout<<*p<<endl;                         //* is VALUE
//cout<<&p<<endl;                         //& so it is address but ->>>>>>NEW ADDRESS<<<<<-



int arr[10]={1,2,3,45,5,5};
//arr=arr+1;  //not possible symbol table mapping not possible 

int *ptr=&arr[0];
ptr=ptr+1;
cout<<ptr<<endl;                        //symbol table cant change content
ptr+=1;
cout<<ptr<<endl;                        //same as type 1 
return 0;
}