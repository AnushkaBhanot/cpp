#include<bits/stdc++.h>
using namespace std;

void add(int arr[], int n, int updates[], int s)
{
    for(int i=0; i<s; i++)
    {
        int k= updates[i];
        for(int j=k-1; j<n; j++)
        {
            arr[j]++;
        }
    }
}

void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={0,0,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int updates[]={1,1,2,3};
    int s= sizeof(updates)/sizeof(updates[0]);
    add(arr, n, updates, s);
    printarray(arr,n);
    return 0;
}
