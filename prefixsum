#include<bits/stdc++.h>
using namespace std;

void prefixsum(int arr[], int n)
{
    int prefixsum[n];
    for(int i=0; i<n; i++)
    {
        if(i==0)
        prefixsum[i]=arr[i];
        else
        prefixsum[i]=arr[i]+prefixsum[i-1];

        cout<<prefixsum[i]<<" ";
    }
}

int main()
{
    int arr[]={10, 20, 10, 5, 15};
    int n=sizeof(arr)/sizeof(arr[0]);
    prefixsum(arr,n);
}
