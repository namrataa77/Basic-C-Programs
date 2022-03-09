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

        for ( int j=0; j < base.size(); j++){
            
            if ( base[j] == num[i]){

                base[j] = 0;
                cout<<j<<endl;
                break;
                
            } 

        }


    }

cout<<base;


return 0;
}
