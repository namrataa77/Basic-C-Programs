#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string& str){
    
    int i=0,j=str.length()-1;

    while(i!=j && i<j){

        swap(str[i], str[j]);
        i++;
        j--;
    }

    for(int i=0; i<str.length(); i++){
        cout<<str[i];
    }
}

int main()
{
    string str = "ahaT sevol atarmaN";
    reverse (str);    
    return 0;
}