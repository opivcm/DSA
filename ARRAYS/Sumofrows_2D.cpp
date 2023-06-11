#include<iostream>
#include<limits.h>
using namespace std;

void printsum(int arr[][3], int i, int j)
{
    cout<<"The sum is -> "<<endl;//to change to row printing and colum printing just interchange i and j in the loop
    for(int i=0;i<3;i++)    //want row means i in the first loop , if want column means  in nthe first loop aste thats it 
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[j][i];//this doesnt change .. this remains constant
        }
        cout<<sum<<" ";
    }
    cout<<endl;//can do this two types , either interchange i and j in cout or change the loop ... changing loop holds good according to me .. lets seee
       
}
int largestrow(int arr[][3], int i, int j)
{
    int maxi=INT_MIN;
    int index=-1;
    for(int i=0;i<3;i++)    //want row means i in the first loop , if want column means  in nthe first loop aste thats it 
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[j][i];//this doesnt change .. this remains constant
        }
        if(sum>maxi)
        {
            maxi=sum;
            index=i;
        }
        
    }
    cout<<"The maximum number is "<<maxi<<endl;
    return index;


}
int main()
{
    int arr[3][3];
    cout<<"Enter the array "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    printsum(arr,3,3);
    
    int ans=largestrow(arr,3,3);
    cout<<"maximum row is at the index "<<ans<<endl;


    // cout<<"Printing the array "<<endl;
    // for(int i=0;i<3;i++)
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    // cout<<endl;
}
