#include<iostream>
using namespace std;

void print(int arr[], int n){
for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
}
void sort012(int arr[], int n){
int currIndex = 0;
int left = 0;
int right = n - 1;
while (currIndex <= right){
if (arr[currIndex] == 0) {
swap(arr[currIndex],
arr[left]);
currIndex++;
left++;
}

else if(arr[currIndex] == 1){
currIndex++;
}
else{
swap(arr[currIndex],
arr[right]);
right--;
}
}
print(arr,n);
}

int main(){
int arr[] = {1,1,0,0,2,2};
sort012(arr,6);
return 0;
}

