#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> func(vector<vector<int>> &vec, vector<int> &arr1){
    for(int i = 0; i<vec.size();i++){
        int temp = vec[i][0];
        int temp2 = vec[i][1]+1;
        reverse(arr1.begin()+temp, arr.begin()+temp2);
        for(auto j: arr1)cout<<j<<" ";
        cout<<endl;
    }
    return arr1;
}

int main()
{
    vector<vector<int>> vec = {{0,9},{4,5},{3,6}};
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    for(auto i: arr) cout<<i<<" ";
    cout<<endl;
    func(vec,arr);
    for(auto i: arr) cout<<i<<" ";
    return 0;
}


