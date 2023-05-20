#include<bits/stdc++.h>
using namespace std;

void initial(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
}
void reverse(int ar[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(ar[start],ar[end]);
        /*int temp=ar[start];
        ar[start]=ar[end];
        ar[end]=temp;*/
        start++;
        end--;
    }
}
void printarray(int ar[], int size){
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int ar[10];
    int br[10];
    int n;
    int n1;

    cout<<"input the size of the first matrix" <<endl;
    cin>>n;
    initial(ar,n);
    cout<<"input the size of the second matrix"<<endl;
    cin>>n1;
    initial(br,n1);
   
    reverse(ar,n);
    reverse(br,n1);

    printarray(ar,n);
    printarray(br,n1);
}