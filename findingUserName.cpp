#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    string str1;
    int num = 0;
    cout<<"Enter email address : ";
    getline(cin,str);
    int len = str.length();

    for( int i = 0; i <= len; i++)
    {

        if (str[i] == '@')
        break;
        cout<<str[i];
    }

    

}
