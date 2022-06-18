#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pairSum(vector<int>& a, int k){

    int i=0;
    while(i<a.size()){
        for(int j=i+1; j<a.size(); j++){
            if(a[i]+a[j] == k){
                cout<<a[i]<<"+"<<a[j]<<endl;
            }
        }
        i++;
    }
}

int main()
{
    vector<int> a = {5,3,8,9,2,4,6,7,1};
    int k = 7;
    pairSum(a,k);

    return 0;
}