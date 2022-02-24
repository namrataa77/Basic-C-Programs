#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str; int c = 0, c1 = 0, space = 0; int n;
    cout<<"Enter a string : ";
    getline(cin,str);

    int N = str.length();

    cout<<"Press 1 for vowel count : \nPress 2 for word count : ";
    cin>>n;

switch (n)
{
    case 1: for (int i = 0; i < N; i++) 
            {
                if (( str[i] == 'a') || ( str[i] == 'e') || ( str[i] == 'i') || ( str[i] == 'o') || ( str[i] == 'u'))
                {
                    c++;
                }
                
            }

            cout<<" \n Number of vowels : "<<c;
            break;

    case 2: for( int i=0; i <= str[i]; i++)
            {
                if(str[i]==' ')
                {
                    space++;
                }
            }

            cout<<" \n Number of words : "<<space;

            break;

    default: cout<<"\nInvalid input. Try again!";
}
    
}


