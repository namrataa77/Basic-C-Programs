#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// vector<int> insert(vector<int>& arr, int num){

//     for (int i=arr.size(); i>0; i--){

//         if(arr[i] > num){
//             arr[i+1] = arr[i];
//             arr[i] = -1;
//         }
//         else if(arr[i] <= num){
//             arr[i+1] = arr[i];
//             break;
//         }

//     }
     
//      return arr;
// }


int main()
{
    vector<int> arr={2,4,5,7,8,0};
    int num = 6;
    for( int i=arr.size()-2; i>=0; i--){
        if(arr[i] > num){
            arr[i+1] = arr[i];
            arr[i] = 0;}
        

        else if (arr[i] < num){
            arr[i+1] = num; 
            break;
        }
        

    }

    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";

    return 0;
    
}