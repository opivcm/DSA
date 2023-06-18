#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={3,9,6,7,41,65,91};
    cout<<arr<<endl;//address                               JUST REMEMBER 
    cout<<*arr<<endl;//value                                THESE TWO aste.........
    cout<<arr[0]<<endl;//value
    cout<<&arr[0]<<endl;//address
    cout<<*arr+1<<endl;//value of 0th Index +1
    cout<<*(arr+1)<<endl;//value of next index
    cout<<*(arr)+1<<endl;//same as *arr+1 value of 0 th index  + 1;
    cout<<*(arr +2)<<endl;//VALUE 6 kodbeku.
    cout<<arr[2]<<endl;//value 6 kodutte
    cout<<2[arr]<<endl;
}