#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    
    string::iterator it;

    for(it = str.begin(); it != str.end(); it++)
    {
        if( *it >= 65 && *it <= 91 )

            *it = *it + 32;
    }

    cout<<str<<endl;


}
