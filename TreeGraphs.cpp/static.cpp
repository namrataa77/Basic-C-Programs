#include<iostream>
using namespace std;

int fun(){
    int sum = 0;
    //while(a!=10) fun(a);
    sum++;
    return sum;
}
int main()
{
    int a = 5;
    cout<<fun();
    cout<<fun();
    return 0;
}