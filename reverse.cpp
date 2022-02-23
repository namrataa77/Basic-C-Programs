#include<iostream>
using namespace std;

int main()
{
    int num, count = 0, sum = 0;
    cout<<"enter a number : ";
    cin>>num;

    while(num!=0)
    {
        int digit = num%10;
        sum = sum * 10 + digit;
        num = num/10;
    }
    cout<<sum;
}