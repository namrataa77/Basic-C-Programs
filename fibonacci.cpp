#include<iostream>
#include<string.h>
using namespace std;


int FiboArray( int N){

    

    int arr[N];

    for( int i = 0; i < N; i++ )
    {
        arr[-1] = 0;
        arr[-2] = 1;
        arr[i] = arr[i-1] + arr[i-2];
        cout<<arr[i]<<endl;
    }
    
}


int FunFibo(int N){

    for ( int i=0; i<N; i++)
    {
        i = i + i-1;
        cout<<i<<endl;
    }
    
}
int main()
{

    int N;
    
    cout<<"Enter a number : ";
    cin>>N;
    
    FunFibo(N);
    
}
