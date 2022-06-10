#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> reverse( vector<int>& arr, int lower, int upper){
    int temp=0;
    for(int i=lower, j= upper; i<j; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

     return arr;
    
}

void lshift( vector<int>& nums, int k){
    int c = nums.size() - k;
    int d = nums.size()-1;
    int a = 0;
    int b = c-1;

    reverse(nums,4,7);
    reverse(nums,a,b);
    reverse(nums,0,nums.size()-1);

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int k = 4;
    lshift(arr,4);
    return 0;
}