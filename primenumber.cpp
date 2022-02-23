#include<iostream>
using namespace std;


int main()
{
    int n,c = 0, flag = 0;
    cout<<"\nEnter a limit : ";
    cin>>n;
    if(n>=2)
    cout<<"2"<<endl;

    for(int i = 1; i<=n; i++)
    {
        
        for(int j = 2; j<i; j++)
        {
            flag = 0;
            if(i%j==0)
            break;
            else
            flag = 1;
        }
    if (flag==1)
    cout<<i<<endl;

    }
    
    
}


    