#include<iostream>
using namespace std;

int add(int , int );

int main()
{
    int add();
    int a,b,z;
    cout<<"enter 2 numbers : ";
    cin>>a>>b;
   
    z = add(a,b);
    cout<<z;
}

int add()
{
    int c;
    c = a + b;
    return c;
}

