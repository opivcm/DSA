#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<p<<endl;   //address
    cout<<*p<<endl;  //value
}
void update(int *p)
{
    //p=p+1;           //address update
    //cout<<"inside the loop the right side p is incremented :-"<<p<<endl;
    *p=*p+1;        //value update
    cout<<"value of new value is  :-"<<*p<<endl;
}
int main()
{
    int value=5;
    int *p=&value;
    print(p);

    cout<<"before update "<<p<<endl;  //same
    cout<<"before update "<<*p<<endl;  //same
    update(p);
    cout<<"after update  "<<*p<<endl;  //same
    return 0;
}