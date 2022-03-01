#include<iostream>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    cout<<"\nadd : "<<c;
}

int power(int n, int m)
{
    for( int i = 0; i<=m-1; i++)
    {
        n = n*n; 
    }
    cout<<"\npower : "<<n;
}


int main()
{
    int x,y;
    cout<<"enter 2 numbers : ";
    cin>>x>>y;
    
    add(x,y);
    power(x,y);

    
}


