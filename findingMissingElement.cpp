#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int> &a, int n, int sum1){
    
    int sum2 = 0;
    int num = 0;
    for(auto i: a){
        sum2= sum2+i;
    }

    if(sum1 == sum2){
        cout<<"No missing element!"<<endl;
    }
    else {
        for( int i = 1; i<a.size(); i++){
            if(a[i] != a[i-1]+1)
            {
                
                num = (a[i] - a[i-1]) - 1;
                int v = a[i-1];
                cout<<endl<<"Missing elements are : ";
                for( int j=0; j<num; j++ ){
                    v++;
                cout<<v<<" ";}
            }

            
        }
    }
}

int main()
{
    vector<int> a = {1,2,3,7,10,15,18};
    int n = 5;
    int sum1 = n*(n-1)/2;
    find(a,n,sum1);
    return 0;
}