#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={0,4,4};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}