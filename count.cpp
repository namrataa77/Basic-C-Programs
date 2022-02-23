#include<iostream>
using namespace std;

int main()
{
    int A[10], c1 = 0, c2 = 0;

    cout<<"Enter 10 numbers : \n";
    for(int i = 0; i <= 9; i++)
    {
        cin>>A[i];
    }

    for(int i=0; i <=9; i++)
    {
        if(A[i] < 0)
        c1++;
        else
        c2++;
    }
    cout<<"Number of positive values : "<<c2<<"\nNumber of negative values : "<<c1;
}

