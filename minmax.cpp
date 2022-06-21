#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void minMax(vector<int>& a){

    int min=a[0], max=a[0];

    for( int i = 0; i<a.size(); i++){
        
        if(a[i] < min)
        min = a[i];

        else if(a[i] > max)
        max = a[i];
    }

    cout<<"Minimum value : "<<min<<endl;
    cout<<"Maximum value : "<<max<<endl;

}
int main()
{
    vector<int> a = {6,4,2,8,3,4,1};
    minMax(a);
    return 0;
}