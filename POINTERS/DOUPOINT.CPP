#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"rinting p"<<p<<endl;     //address
    cout<<"address of p"<<&p<<endl; //address
    cout<<i<<endl;              //value
    cout<<*p<<endl;             //same value
    cout<<**p2<<endl;           //same value
}