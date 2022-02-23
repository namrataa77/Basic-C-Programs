#include<iostream>
using namespace std;

int main()
{
    cout<<"Lower traingle : \n";
    for( int i = 0; i < 5; i++)
    {
        for( int j = 0; j < i; j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }

    cout<<"Upper traingle : \n";
    for( int i = 0; i < 5 ; i++)
    {
        for( int j = 0; j < 4; j++)
        {
            if( i+j < 4)
            cout<<"*";   
            else
            cout<<" ";
        }
        cout<<endl;
    }

    

}