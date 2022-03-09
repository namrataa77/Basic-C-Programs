#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string base, num;
    cout<<"Enter the base number"<<endl;
    cin>>base;

    cout<<"Enter a number"<<endl;
    cin>>num;

    int L = base.length();


    for( int i=0; i < num.size(); i++){

        for ( int j= base.size(); j >= 0; j--){
            
            if ( base[j] == num[i]){
                
                base[j] = 0;
                                    
                break;
                
            } 

        }


    }

cout<<base;


return 0;
}
