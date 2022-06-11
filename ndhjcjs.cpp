#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void add(vector<int>& nums){
    for(int i = 0; i < 5; i++){
        nums[i] += 1;
    }
}
void add2(vector<int> nums){
    for(int i = 0; i < 5; i++){
        nums[i] += 1;
    }
}
int main()
{
    vector<int> arr={2,4,5,7,8};
    
    cout<<"Function call without & will not change the original array";
    add2(arr);

    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    
    cout<<"\n";
    
    cout<<"Function call with & will change the original array";
    
    add(arr);
    
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";

    return 0;
}