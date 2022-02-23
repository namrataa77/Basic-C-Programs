#include<iostream>
using namespace std;
int main()
{
    int BP;
    float PA, PD, salary;
    cout<<"enter basic pay : ";
    cin>>BP;
    PA = 0.2 * BP;
    PD = 0.05 * BP;
    salary = BP + PA - PD;
    cout<<"\nsalary = "<<salary;
}