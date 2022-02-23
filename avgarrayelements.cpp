#include<iostream>
using namespace std;

int main()
{
    int A[5], sum = 0;
    cout<<"Enter values : ";
    for( int i = 0; i < 5; i++)
    {
        cin>>A[i];
    }

        for(int i = 0; i < 5; i++)
        {
            sum = sum + A[i];
        }

    int avg = sum / 5;
    cout<<"Average is equal to : "<<avg;


}