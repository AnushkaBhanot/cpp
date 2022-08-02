#include<bits/stdc++.h>
using namespace std;

void update(int a[], int s, int e, int u)
{
    for(int i=s; i<=e; i++)
    {
        a[i]+=u;
    }
}

void printarray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={10, 5, 20, 40};
    int n=sizeof(a)/sizeof(a[0]);
    update(a,0,1,10);
    printarray(a,n);
    update(a,1,3,20);
    update(a,2,2,30);
    printarray(a,n);
    return 0;
}
