#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,r1,r2,d;
    cout<<"enter values of a, and c : ";
    cin>>a>>b>>c;
    d = sqrt(b*b - 4*a*c);
    r1 = (-b + d) / (2*a);
    r2 = (-b - d) /(2*a);
    cout<<"\n root1 is : "<<r1;
    cout<<"\n root2 is : "<<r2;
}