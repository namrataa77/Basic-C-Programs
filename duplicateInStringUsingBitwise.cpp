#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    char a[]="finding";
    long int h = 0, x = 0;
    for(int i=0; a[i]!='\0';i++){
        x = 1;
        x = x << (a[i]-97);

        if((x&h)>0){
            cout<<a[i]<<" is duplicate"<<endl;
        }
        else h = x|h;
    }
}