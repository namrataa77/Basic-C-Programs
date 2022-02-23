#include<iostream>
using namespace std;

int main()
{
    int fac = 1, n = 0;
    cout<<"enter a number : \n";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        fac = fac * i;

    }
    cout << "factorial of "<<n<<" is "<<fac;
}