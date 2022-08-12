#include<bits/stdc++.h>
using namespace std;

int fac(int n)
{
    if(n==0)
     return 1;

    int res=1;
    for(int i=2; i<=n; i++)
     res= res*i;
    return res;
}

int nCr(int n, int r)
{
    return fac(n)/ (fac(r)*fac(n-r));
}

int main()
{
    int n=5, r=3;
    cout<<nCr(n,r);
    return 0;
}
