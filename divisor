#include<bits/stdc++.h>
using namespace std;

void divisor(int n)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i==0)
         cout<<i<<" ";
    }
    if(i-(n/i)==1)
    {
        i--;
    }
    for( ; i>=1; i--)
    {
        if(n%i ==0)
         cout<<n/i<<" ";
    }
}

int main()
{
    cout<<"Divisor: ";
    divisor(100);
    return 0;
}
