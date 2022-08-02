#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int visited[n];
    for(int i=1; i<n+1; i++)
    {
        int count=0;
        if(visited[i]!=1)
        {
            for(int j=0; j<n; j++)
            {
                if(i==arr[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
        }
            cout<<i<<"="<<count<<endl;
    }
}

int main()
{
    int arr[]={2, 3, 2, 3, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
    return 0;
}
