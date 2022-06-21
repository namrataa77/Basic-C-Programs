#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pairSum(vector<int>& a, int k){

    int i=0;
    int j=a.size()-1;
    
    while(i<j){
        if(a[i]+a[j] > k)
            j--;
        else if(a[i]+a[j] == k){
            cout<<a[i]<<"+"<<a[j]<<endl;
            j--;
            i++;
        }
        else i++;
    }
}

int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    int k = 7;
    pairSum(a,k);

    return 0;
}