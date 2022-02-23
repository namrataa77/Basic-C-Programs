#include<iostream>
using namespace std;


int main()
{
    int a;
    cout<<"enter year in four digits\n";
    cin>>a;
    if(a%4==0)
    {
     if (a%100==0)
      {
          if(a%400==0)
          cout<<"\nleap year";
          else cout<<"\nno leap year";
          
       }
     else cout<<"\nleap year";
    }
    else cout<<"\nno leap year";

}