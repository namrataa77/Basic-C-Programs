#include<iostream>
using namespace std;

int main()
{
    int num, c = 0;
    cout<<"Enter a number : ";
    cin>>num;
    
    if(num==0)
    cout<<"1 digit\n";

    while (num!=0) 
    {
      num = num/10;
      c++;
    } 
    
    cout<<c<<" digit";
    return 0;
}
