#include<iostream>
#include<stdio.h>
using namespace std;

// int func(int m){
//     if(m>100) return m-10;
//     return func(func(m+11));
// }

int main()
{
    void *p;
    int a[4] = {1,2,3,4};
    p = &a[3];
    int *ptr = &a[2];
    int n = (int*)p - ptr;
    cout<<n;
    return 0;
}



