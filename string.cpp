#include<iostream>
#include<string.h>
using namespace std;

void strIterator(string str){

    string::iterator it;

    for(it = str.begin(); it != str.end(); it++)
    {
        if( *it >= 65 && *it <= 91 )

            *it = *it + 32;
    }

    cout<<str<<endl;


}

void traverseString( string str){

        for(int i = 0; i < str.size(); i++)
        {
            cout<<str[i]<<" ";
        }

}

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    
    traverseString(str);
    

}
