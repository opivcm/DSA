#include<iostream>
using namespace std;

void update(int **p2)
{
    //p2+=1;
    //Changes? -- NO
    *p2+=1;
    //Changes? -- YES
    //Because int 4 space so 710+4 it will upgrade. p value changes to 4 units+
    //**p2+=1;
    //Changes? --NO
    //becaus ei just chaging address.
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    /*cout<<"rinting p"<<p<<endl;     //address
    cout<<"address of p"<<&p<<endl; //address

    cout<<i<<endl;              //value
    cout<<*p<<endl;             //same value
    cout<<**p2<<endl;           //same value

    cout<<&i<<endl;             //address
    cout<<p<<endl;              //same address 
    cout<<*p2<<endl;            //same address

    cout<<&p<<endl;             //same address of last second element
    cout<<p2<<endl;  
    */           //same address of last second element
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;

    update(p2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;
}