#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int p;
	cin>>p;
	int A[p][3];
    int X,Y,Z;
    int res = 0, total = 0, time = 0;
    int breaks = 0, Q = 0, rem = 0;
	for(int i=0; i<p;i++){
	    for(int j=0; j<3; j++){
	        cin>>A[i][j];
	    }
	}
	
	for(int i=0; i<p;i++){
	    for(int j=0; j<3; j++){
	        X = A[i][0];
            Y = A[i][1];
            Z = A[i][2];

            if(j==2){
                Q = X/3;
                if(X <= 3){
                    res = X*Y;
                    cout<<res<<endl;
                }
                else{
                    if(X%3 == 0){
                        
                        breaks = Z * (Q-1);
                        
                        time = Q * Y * 3;
                        

                        total = breaks + time;
                        cout<<total<<endl;
                    }
                    else{
                        breaks = Q * Z;
                        rem = X%3;
                        time = (Q*3*Y)+(rem*Y);

                        total = breaks + time;
                        cout<<total<<endl;
                    }
                }
            
            }
            
            
	        
	    }
        
        
	}
	return 0;
}
