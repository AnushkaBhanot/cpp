#include<bits/stdc++.h>
using namespace std;

void count(int arr[], int size, int marks)
{
    int ans=0;
    if(size==0)
     cout<<"Empty"<<endl;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>marks)
         ans++;
    }
    cout<<ans;
}

int main()
{
    int arr[]={4, 6, 0, 1, 2};
    int size= sizeof(arr)/sizeof(arr[0]);
    int marks= 2;
    count(arr, size, marks);
    return 0;
}
