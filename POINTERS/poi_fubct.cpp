#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<p<<endl;   //address
    cout<<*p<<endl;  //value
}

int getsum(int arr[],int *p)
{

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
    int arr[10];
    int value=5;
    int *p=&value;
    print(p);

    //cout<<"before update "<<p<<endl; 
   //cout<<"before update "<<*p<<endl;  //prints *p value
   // update(p);
   // cout<<"after update  "<<*p<<endl;  //*p is being update with new value 6
   cout<<getsum(arr)<<endl;
    return 0;
}