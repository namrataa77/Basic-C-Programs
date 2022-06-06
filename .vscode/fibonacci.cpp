#include<iostream>
using namespace std;

int fibo( int a, int b, int count){
   
    count ++;
    int c =a + b;
    
    cout<<" "<<c;
    
    a = b;
    b  = c;
    if (count > 7)
    return 0;
    else 
    fibo(a,b,count);

    
}


int main()
{
    int a = 0;
    int b = 1;
    int count = 3;
    cout<<" "<<a<<" "<<b;
    fibo(a,b,count);
    return 0;
}