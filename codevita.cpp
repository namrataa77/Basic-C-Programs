#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int C, N; string S; string info;
    cin>>C>>N;
    cin.ignore();
    getline(cin, S);
    //cout<< S;

    int len = S.length();


    vector<int> v(C);
    for ( int i=0; i<len; i++ ){
        
        if( i%2 == 0)
        {
            v.push_back(S[i]);
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << "; ";
    }




    
}

  	
  	
  	
  
  
  	







