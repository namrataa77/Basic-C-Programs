#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int duplicate(char a[]){

    int h[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0; a[i]!='\0'; i++){
        h[a[i]-97]++;
    }
   
    for(int i=0; i<26; i++){
        if(h[i]>1)
        cout<<(char)(i+97)<<" ";
    }
}

int main()
{
    char a[]="finding";
    duplicate(a);
    return 0;
}