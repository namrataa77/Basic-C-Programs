#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string str;
    string rev = " ";
    cout<<"Enter a string : ";
    getline(cin,str);

    int len = str.length();

    rev.resize(len);

    for(int i = 0, j = len-1; i < len; i++, j--)
    {
        rev[i] = str [j];

    }

    rev[len] = '\0';
    cout<<rev<<endl;

    if( str.compare(rev) == 0)
    cout<<"Palindrome\n";
    
    else
    cout<<"Not palindrome";

}