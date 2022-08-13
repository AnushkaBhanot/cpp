#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1, 5, 8, 4, 9, 2, 6, 3, 7, 0};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, greater<int>());
    cout<<"Sorted array:"<<endl;
    for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
    return 0;
}
