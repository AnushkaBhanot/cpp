#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b== 0 ? a : gcd(b,a%b);
}

int main()
{
    int a=98;
    int b=56;
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd(a,b);
    return 0;
}
