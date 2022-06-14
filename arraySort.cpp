#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& a){

    vector<int> res;
    int flag=0;
    for(int i=0; i<a.size(); i++){
        if(i==0)
            res.push_back(a[i]);
        else if(a[i]<a[i-1])
            {
                swap(a[i], a[i-1]);
                flag = 1;
            }

        else flag=0;
    }

    if(flag==1)
        sortArray(a);
    else
        return a;


}


int main()
{
    vector<int> a = {40,2,16,68,50};
    sortArray(a);

    for(auto i: a){
        cout<<i<<" ";
    }
    return 0;
}