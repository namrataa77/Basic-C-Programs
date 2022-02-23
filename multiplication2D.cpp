#include<iostream>
using namespace std;

int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2];

    cout<<"Enter values for A : \n";
    for( int i = 0; i < 2; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"\nEnter values for B : \n";
    for( int i = 0; i < 2; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<"\nResultant values for C are : \n";
    for( int i = 0; i < 2; i++)
    {
        for( int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}