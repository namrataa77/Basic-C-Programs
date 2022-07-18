#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	int s1 = 0, s2 = 0;
	cin>>x;
	int A[x][4];
	for(int i=0; i<x;i++){
	    for(int j=0; j<4; j++){
	        cin>>A[i][j];
	    }
	}
	
	for(int i=0; i<x;i++){
	    for(int j=0; j<4; j++){
            // cout<<"hi";
	        if(j<2) {
            s1 = s1+A[i][j]; 
            }
	        else {
                s2 = s2 + A[i][j]; 
            }
            
	        if(j == 3){
	        if(s1<s2) 
                cout<<s1<<endl;
	        else 
                cout<<s2<<endl; 
            }
	        
	    }
        s1 = 0;
        s2 = 0;
	}
	return 0;
}
