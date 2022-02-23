#include<iostream>
using namespace std;

int main()
{
    int num,sum = 0;
    cout<<"Enter a three digit number : ";
    cin>>num;
    int n = num;
    while(num!=0)
    {
        int digit = num%10;
        sum = sum + digit * digit * digit;
        num = num/10;
    }
    if (sum==n)
    cout<<"It is an Armstrong number\n";
    else
    cout<<"It is not an Armstrong number";
}


