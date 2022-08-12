#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    if(size== 0)
     return -1;
    if(arr[size-1]== key)
     return size-1;
    else
    {
     int ans= linearSearch(arr, size-1, key);
     return ans;
    }
}

int main()
{
    int arr[]= {5, 15, 6, 9, 4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int ans= linearSearch(arr, size, key);
    if(ans== -1)
     cout<<key<<" not found"<<endl;
    else
     cout<<key<<" is at "<<ans<<" index of arr"<<endl;
    return 0;
}
