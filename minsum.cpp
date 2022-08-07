#include<bits/stdc++.h>
using namespace std;

int minsum(int a[], int n)
{
    int min_so_far=a[0];
    int curr_min=a[0];
    for(int i=0; i<n; i++)
    {
        curr_min=min(a[i], curr_min+a[i]);
        min_so_far=min(min_so_far, curr_min);
    }
    return min_so_far;
}

int main()
{
    int a[]={3, -1, -2};
    int n=sizeof(a)/sizeof(a[0]);
    int min_sum= minsum(a,n);
    cout<<"Minimum sum of array= "<<min_sum;
    return 0;
}
