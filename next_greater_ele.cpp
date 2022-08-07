#include<bits/stdc++.h>
using namespace std;

void ele(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                cout<<arr[j]<<" ";
                break;
            }
            else
             j=i+1;
        }
    }
        cout<<"-1 ";
}

int main()
{
    int arr[]={1, 3, 2, 4};
    int n= sizeof(arr)/sizeof(arr[0]);
    ele(arr,n);
    return 0;
}
