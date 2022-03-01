#include<iostream>
using namespace std;

int linearSearch( int A[], int key);


int linearSearch(int A[], int key)
{
    for( int i = 0; i < 10; i++)
        {
            if( A[i] == key)
            {
            cout<<key<<" is present at index "<<i;
            return 0;
            }
        }
        cout<<"key not found! Try again.";


}

int main()
{
    int A[5];
    int key;
    cout<<"Enter an array of integers : ";
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
    }

    cout<<"Enter the keyber to be searched : ";
    cin>>key;

    linearSearch(A,key);
}