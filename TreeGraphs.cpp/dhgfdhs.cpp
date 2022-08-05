#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str[20] = "Hello";
    char *const p = str;
    *p = 'J';
    printf("%s", str);
    return 0;
}


