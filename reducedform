#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    int temp[n];
    memcpy(temp, arr, n*sizeof(int));
    sort(temp, temp+n);

    unordered_map<int, int> umap;

    int val=0;
    for(int i=0; i<n; i++)
    {
        umap[temp[i]]= val++;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]= umap[arr[i]];
    }
    for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={10, 40, 20};
    int n= sizeof(arr)/sizeof(arr[0]);
    update(arr,n);
    return 0;
}
