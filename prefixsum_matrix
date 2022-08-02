#include<bits/stdc++.h>
using namespace std;
#define r 3
#define c 3

void prefixsum(int arr[r][c])
{
    int prefixsum[r][c];
    prefixsum[0][0]=arr[0][0];
    for(int i=1; i<c; i++)
    {
        prefixsum[0][i]=prefixsum[0][i-1]+arr[0][i];
    }
    for(int i=1; i<r; i++)
    {
        prefixsum[i][0]=prefixsum[i-1][0]+arr[i][0];
    }
    for(int i=1; i<r; i++)
    {
        for(int j=1; j<c;j++)
        {

        prefixsum[i][j]=prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1]+arr[i][j];
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<prefixsum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[r][c]={{10, 20, 30}, {5, 10, 20}, {2, 4, 6}};
    prefixsum(arr);
}
