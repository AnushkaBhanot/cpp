#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
     return b;
    return gcd(b%a,a);
}

int power(int x, unsigned int y, unsigned int m)
{
    if(y==0)
     return 1;
    int p= power(x, y/2, m)% m;
    p= (p*p)%m;

    return (y%2==0) ? p : (x*p)%m;
}

void modInverse(int a, int m)
{
    int g= gcd(a,m);
    if(g!=1)
     cout<<"Inverse doesn't exist";
    else
    {
         // If a and m are relatively prime, then modulo inverse is a^(m-2) mode m
         cout<<"Modular multiplicative inverse is: "<<power(a,m-2,m);
    }
}

int main()
{
    int a=3, m=11;
    modInverse(a,m);
    return 0;
}
