#include<bits/stdc++.h>
using namespace std;

/*void print(int *p)
{
    cout<<p<<endl;   //address
    cout<<*p<<endl;  //value
}*/

int getsum(int *arr,int n)      //arr[] or*arr it will pass as pointer
{
    cout<<"wtf "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

/*void update(int *p)
{
    //p=p+1;           //address update
    //cout<<"inside the loop the right side p is incremented :-"<<p<<endl;
    *p=*p+1;        //value update
    cout<<"value of new value is  :-"<<*p<<endl;
}*/

int main()
{
    int arr[5]={1,2,3,4,5};
   // int value=5;
    //int *p=&value;
    //print(p);

    //cout<<"before update "<<p<<endl; 
   //cout<<"before update "<<*p<<endl;  //prints *p value
   // update(p);
   // cout<<"after update  "<<*p<<endl;  //*p is being update with new value 6
   cout<<"bruh "<<getsum(arr+2,5)<<endl;
    return 0;
}