#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4],int ele, int i, int j)
{
   for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
        {
            if(arr[i][j] == ele)
            {
                return 1;
            }
        }
    return 0;
}
int main()
{
    int arr[3][4];
    int ele;
    cout<<"Enter the array "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    
    cout<<"Enter the element to be searched "<<endl;
    cin>>ele;
    if(isPresent(arr,ele,3,4))
    {
        cout<<"Element is present "<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }
    return 0;
}
