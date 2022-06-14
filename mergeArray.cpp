#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArray(vector<int>& a, vector<int>& b ){

    vector<int> res;
    int i=0, j=0;


    while( i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res.push_back(a[i]);
            i++;
        }

        else{
            res.push_back(b[j]);
            j++;
        }
    }

    if( i<a.size()){
        for(int k=i; k<a.size(); k++){
            res.push_back(a[k]);
            i++;
        }
    }

    else if(j<b.size()){
        for(int k=i; k<b.size(); k++){
            res.push_back(b[k]);
            j++;
        }
    }

    return res;

}

int main()
{
    vector<int> a={2,40,60,80};
    vector<int> b={1,5,7,9,10};
    vector<int> res = mergeArray(a,b);

    for(auto i: res){
        cout<<i<<" ";
    }

    return 0;
}