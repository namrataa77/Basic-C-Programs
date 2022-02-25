#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    cout<<c;
}


int main()
{
    int x,y;
    cout<<"enter 2 numbers : ";
    cin>>x>>y;
    
    add(x,y);
    
}


