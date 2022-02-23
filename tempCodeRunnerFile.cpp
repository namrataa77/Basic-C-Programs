#include<iostream>
using namespace std;

int n;

int perfect()
{
    float fac = 0.0; int sum = 0;
    cout<<"\nenter a number : ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        sum = sum + i;

    }
    if (sum%n==0)
    cout<<"\nIt is a perfect number";
    else
    cout<<"\nNot a perfect number";
    
}

int main()
{
    string a;
  
    perfect();
    cout<<"\nDo you want to continue? \n";
    cin>>a;
    if(a== "yes")
    perfect();
    else
    return 0;
}