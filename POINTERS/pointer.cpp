#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=1;
    int *p;//never ever do this , this points some random value.
    cout<<num<<endl;
    cout<<"address of num is "<<&num<<endl;
    int *ptr= &num;
    cout<<"address is: "<<ptr<<endl;
    cout<<"value is: "<<*ptr<<endl;//value bascially double double is value.

    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    return 0;
}