#include<bits/stdc++.h>
using namespace std;

void max(int arr[], int n)
{
    int max= arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
         max=arr[i];
    }
    cout<<"Max= "<<max<<endl;
}

void min(int arr[], int n)
{
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<arr[i+1])
         min=arr[i];
    }
    cout<<"Min= "<<min;
}

int main()
{
    int arr[]={45, 12, 65, 99, 34};
    int n=sizeof(arr)/sizeof(arr[0]);
    max(arr,n);
    min(arr,n);
    return 0;
}
