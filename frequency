#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int visited[n];
    for(int i=0; i<n; i++)
    {
        if(visited[i]!=1)
        {
            int count=1;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            cout<<arr[i]<<"="<<count<<endl;
        }
    }
}

int main()
{
    int arr[]={10, 20, 20, 10, 10, 20, 5, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
    return 0;
}
