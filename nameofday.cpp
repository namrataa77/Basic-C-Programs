#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number from 1 to 7\n";
    cin>>num;
    
    switch(num)
    {
        case 1: cout<<"Monday";
                break;
        case 2: cout<<"tuesday";
                break;
        case 3: cout<<"wednesday";
                break;
        default: cout<<"invalid input";
    }
}