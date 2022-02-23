#include<iostream>
using namespace std;

int main()
{
    int A[10], key, flag = 0;
    cout<<"Enter 10 numbers : ";
    for(int i = 0; i < 10; i++)
    {
        cin>>A[i];
    }

    cout<<"\nEnter key value to be searched : ";
    cin>>key;

        for( int i = 0; i < 10; i++)
        {
            if( A[i] == key)
            {
            cout<<key<<" is present at index "<<i;
            return 0;
            }
        }
        cout<<"Key not found! Try again.";

}