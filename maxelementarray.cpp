#include<iostream>
using namespace std;

int main()
{
    int A[5], max = 0;
    cout<<"enter 5 elements : ";
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
        if(A[i]>A[i-1])
        max = A[i];
    }
    
    cout<<endl<<"Max is equal to : "<<max<<endl;
    
}