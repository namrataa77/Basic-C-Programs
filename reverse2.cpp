#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, num1, count = 0, digit;
    double sum = 0;
    cout<<"enter a number : ";
    cin>>num;
    num1 = num;
    while(num1!=0)
    {
        num1 = num1 / 10;
        count++;
        
    }

        for(int i=count-1; i>=0; i--) 
        {
            digit = num % 10;
            num = num / 10;
            sum = sum + (digit * pow(10,i));
        }

    cout<<sum;
}