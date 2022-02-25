#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b)
{
    return a + b;
}

int main()
{
    cout<<maxim(200 , 599)<<endl;
    cout<<maxim(2.7 , 4.7)<<endl;
    cout<<maxim(2.9f , 0.5f)<<endl;
}


