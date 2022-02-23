#include<iostream>
using namespace std;
int main()
{
    int time;
    cout<<"enter time in hours: \n";
    cin>>time;
    if((time>=9)&&(time<=18))
    cout<<"working\n";
    else
    cout<<"not working\n";
}