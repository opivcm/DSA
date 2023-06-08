#include<iostream>
#include<string>
#include<sstream>
using namespace std;

 char getmaxoccur(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z')
            {
                number=ch-'a';//subtracting a because 
            }
        else
            {
                number=ch-'A';
            }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0; 
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
            {
                ans=i;
                maxi=arr[i];
            }
        maxi=max(maxi,arr[i]);
    }
    char final_answer='a'+ans;
    return final_answer;
}

int main()
{
   string s;
   char delimiter=',';
   getline(cin,s,delimiter);
   cout<<getmaxoccur(s)<<endl;
   return 0;
}