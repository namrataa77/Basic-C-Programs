#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int> &a, int n, int sum1){
    
    int sum2 = 0;

    for(auto i: a){
        sum2= sum2+i;
    }

    if(sum1 == sum2){
        cout<<"No missing element!"<<endl;
    }
    else {
        for( int i = 1; i<a.size(); i++){
            if(a[i] != a[i-1]+1)
            cout<<a[i-1]+1<<" is missing."<<endl;
        }
    }
     

    

}

int main()
{
    vector<int> a = {1,2,3,5};
    int n = 5;
    int sum1 = n*(n-1)/2;
    find(a,n,sum1);
    return 0;
}