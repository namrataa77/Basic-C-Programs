#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int x;
    cin>>x;
    

    for(int i=0; i<x;i++){
        int count;
        int c = 0;
        cin>>count;
        char str[count];
        gets(str);

        for(int j = 0; str[i]; i++){
            if(str[i] >= 'a' && str[i] <= 'z' ){
                c++;
            }

        }
        if(c>3)
        cout<<"YES";
        else cout<<"NO";
        



    }

    return 0;
}