#include<iostream>
using namespace std;

int main()
{
    int count = 1;
    
    for( int i = 0; i < 4; i++)
    {
        for( int j = 0; j < 4; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    for( int i = 0; i < 10; i++)
    {
        for( int j = 0; j < i; j++)
        {
            cout<<"*";
           
        }
        cout<<endl;
    }
}

