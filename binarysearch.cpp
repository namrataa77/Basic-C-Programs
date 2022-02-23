#include<iostream>
using namespace std;

int main()
{
    int A[10], key, mid, high = 9, low = 0;
    cout<<"Enter 10 numbers : ";
    for(int i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    
    cout<<"\nEnter key value to be searched : "; 
    cin>>key;

    while (low <= high)
        {
            mid = (low + high) / 2;
            if ( key == A[mid])
                {
                    cout<<"\nKey found at : "<<mid;
                    return 0;
                }

            else if ( key < mid)
                {
                    high = mid-1;
                }    
            else low = mid + 1;    
        }
}
