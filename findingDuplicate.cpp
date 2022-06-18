#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findDuplicate(vector<int>& a){
    int last=0;
    for(int i=0; i<a.size(); i++){
        if((a[i] == a[i-1]) && (a[i] != last)){
            last=a[i];  
            cout<<last<<endl;
        }
    }
}

int main()
{
    vector<int> a = {1,2,3,3,3,4,5,6,6};
    findDuplicate(a);
    return 0;
}