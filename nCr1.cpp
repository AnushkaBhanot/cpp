#include<bits/stdc++.h>
using namespace std;

void nCr(int n, int r)
{
    long long p=1, k=1; //p holds the value of n*(n-1)*(n-2)..., k holds the value of r*(r-1)...

    if(n-r < r)
     r= n-r; // C(n, r) == C(n, n-r), choosing the smaller value

    if(r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            long long m= __gcd(p,k);

            p/=m;
            k/=m;
            // dividing by gcd, to simplify product division by their gcd saves from the overflow

            n--;
            r--;
        }
    }
    else
     p=1;

    cout<<p<<endl;
}

int main()
{
    int n=50, r=25;
    nCr(n,r);
    return 0;
}
