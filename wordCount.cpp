#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str; int c = 0;
    cout<<"Enter a string : ";
    getline(cin,str);

    int N = str.length();

    for (int i = 0; i < N; i++) 
    {
        if (( str[i] == 'a') || ( str[i] == 'e') || ( str[i] == 'i') || ( str[i] == 'o') || ( str[i] == 'u'))
        {
            c++;
        }
        
    }

    cout<<" \n Number of vowels : "<<c;
}


