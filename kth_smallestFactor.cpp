#include<bits/stdc++.h>
using namespace std;

void divisor(int n, int k)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i==0 && i==k)
         cout<<i<<" ";
    }
    if(i-(n/i)==1)
    {
        i--;
    }
    for( ; i>=1; i--)
    {
        if(n%i ==0 && i==k)
         cout<<n/i<<" ";
    }
}

int main()
{
    cout<<"Divisor: ";
    divisor(4,2);
    return 0;
}
