#include<iostream>
using namespace std;

int main()
{
    int A[5]; double sum = 0;
    cout<<"enter elements : ";
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
        sum = sum + A[i];
    }
    
    cout<<endl<<"Sum is equal to : "<<sum<<endl;
    
}