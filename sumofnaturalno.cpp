#include<iostream>
using namespace std;

int main()
{
    int sum = 0, n = 0;
    cout<<"enter limit : \n";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<"sum = "<<sum;
}