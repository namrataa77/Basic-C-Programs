#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int palindrome(string &str){

    int flag=0;
    for(int i=0, j=str.length()-1; i!=j && i<j; i++,j--){

        if(str[i] != str[j])
        {
            flag = 0;
            cout<<"Not Palindrome";
            break;
        }

        else flag = 1;
    }

    if(flag == 1)
    cout<<"Palidrome";
}

int main()
{
    string str="ozzzo";
    palindrome(str);
    return 0;
}