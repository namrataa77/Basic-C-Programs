#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> add(vector<int> nums){
    
    for(int i : nums){
        nums[i] = nums[i]+1;
    }

    return nums;
}
int main()
{
    vector<int> nums = {1,2,3,4,5};
    add(nums);

    for(int i: nums)
    cout<<nums[i]<<" ";


    return 0;
}